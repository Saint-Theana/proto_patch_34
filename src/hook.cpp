#include <map>
#include <string>
#include "format.h"
#include <iostream>
#include <locale>
#include <codecvt>
#include "common/milog.h"
#include "common/minet.h"
#include <dlfcn.h>
#include "google/protobuf/util/json_util.h"
#include "json/json.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <libgen.h>   // For dirname()
#include <unistd.h>   // For readlink()
#include <list>
#include "httplib.h"
#include "app-types.h"
#include "PFishHook.h"
#include "Zydis/Zydis.h"
#include "cmdid.h"
#include "proto_hook.h"
#include "proto/cmd/cmd_misc.pb.h"
#include "proto/cmd/cmd_player.pb.h"
#include "proto/shit.pb.h"

#define __int64 long long


#define STORE_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#define DO_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#include "functions.h"
#undef DO_APP_FUNC
#undef STORE_APP_FUNC

static bool is_gate_=false;
static bool is_game_=false;

bool is_gate(){
  if(is_gate_){
      return true;
  }
  void *handle = dlopen(NULL, RTLD_NOW);
  void *f = dlsym(handle, "_ZN13GateserverAppC1Ev");
  
  dlclose(handle);
  if(f){
      is_gate_=true;
      return true;
  }
  return false;
}


bool is_game(){
  if(is_game_){
      return true;
  }
  void *handle = dlopen(NULL, RTLD_NOW);
  void *f = dlsym(handle, "_ZN13GameserverAppC1Ev");
  
  dlclose(handle);
  if(f){
      is_game_=true;
      return true;
  }
  return false;
}


int32_t doSerializeToArray_Fake(common::minet::Packet *_this,char* buff,uint32_t len){
    int32_t y =doSerializeToArray(_this,buff,len);
    
    uint16_t *cmd =(uint16_t *)buff+1;  //ntohs(*(uint16_t *)buff+1);
    
    uint16_t cmd_id=ntohs(*cmd);
    
    INFO("cmd_id: %d",cmd_id);
    
    INFO("cmd_id: %d",_this->cmd_id);
   // if(is_gate()){
        if(getCMDIdReverseConvertMap().count(cmd_id)!=0){
            *cmd=htons(getCMDIdReverseConvertMap()[cmd_id]);
           // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
        }
  //  }
    
    
    INFO("cmd_id: %d",_this->cmd_id);
    
    return y;
}

void printHex(const char* data, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        // 使用 std::setw(2) 和 std::setfill('0') 来确保每个字节都打印为两位数
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<unsigned int>(static_cast<unsigned char>(data[i])) << " ";
    }
    std::cout << std::dec << std::endl;  // 打印完成后恢复为十进制格式
}


uint32_t convert_set_time_req_packet(common::minet::Packet *_this,char* buff,uint32_t len){
  //  printHex(buff,len);
    proto::ClientSetGameTimeReq req;
    uint16_t *head_len_ptr=(uint16_t *)buff+2;
    uint16_t head_len=ntohs(*head_len_ptr);
    
    unsigned int *body_len_ptr=(unsigned int*)(buff+6);//__builtin_bswap32(*);
    
    unsigned int body_len=__builtin_bswap32(*body_len_ptr);
    
    req.ParseFromArray(buff+2+2+2+4+head_len, body_len);
    
    proto::ChangeGameTimeReq new_req;
    
    new_req.set_game_time(req.game_time()%1440);
    new_req.set_extra_days((req.game_time()-req.client_game_time())/1440);
    
    char tmp_buff[100];  // 示例缓冲区大小
    memset(tmp_buff, 0, sizeof(tmp_buff));  // 初始化缓冲区
    
    int size = new_req.ByteSizeLong();
    new_req.SerializeToArray(tmp_buff, size);
    
    std::memcpy(buff+2+2+2+4+head_len, tmp_buff, size);
    std::memcpy(buff+2+2+2+4+head_len, tmp_buff, size);
    *body_len_ptr=__builtin_bswap32(size);
    
    *(buff+2+2+2+4+head_len+size)=0x89;
    *(buff+2+2+2+4+head_len+size+1)=0xab;
    
    
    len=len+(size-body_len);
  //  printHex(buff,len);
    return len;
}

int32_t parseFromArray_Fake(common::minet::Packet *_this,char* buff,uint32_t len){
    
    uint16_t *cmd =(uint16_t *)buff+1;  //ntohs(*(uint16_t *)buff+1);
    
    uint16_t cmd_id=ntohs(*cmd);
    
    INFO("cmd_id: %d",cmd_id);
    
    if(cmd_id==108){
        if(is_gate()){
            len=convert_set_time_req_packet(_this,buff,len);
        }
    }
    
    
    INFO("cmd_id: %d",_this->cmd_id);
  //  if(is_gate()){
        if(getCMDIdConvertMap().count(cmd_id)!=0){
            *cmd=htons(getCMDIdConvertMap()[cmd_id]);
           // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
        }
    //}
    
    int32_t y =parseFromArray(_this,buff,len);
    INFO("cmd_id: %d",_this->cmd_id);

    return y;
}

uint32_t message_id_Fake(proto::UnionCmd *_this){

    uint32_t cmd_id =message_id(_this);
    
    if(getCMDIdConvertMap().count(cmd_id)!=0){
        cmd_id=getCMDIdConvertMap()[cmd_id];
        // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
    }
    return cmd_id;
}


google::protobuf::EnumValueDescriptor* FindEnumValueByName_Fake(google::protobuf::Descriptor *_this,std::string *name){
    
    google::protobuf::EnumValueDescriptor* evd= FindEnumValueByName(_this,name);
   // INFO("FindEnumValueByName_Fake %s %s %d!\n",_this->name().c_str(),(*name).c_str(),evd->number());
    
    if(*name=="CMD_ID"){
        if(getCMDIdMap().count(_this->name())==0){
            INFO("CMD %s not found!\n",_this->name().c_str());
    
        
        }else{
             //evd->number_=getCMDIdMap()[_this->name()];
        
        }
        
        
    }
   // INFO("FindEnumValueByName_Fake %s %s %d!\n",_this->name().c_str(),(*name).c_str(),evd->number());
    
    return evd;
}

__attribute__((constructor)) void setup_hook() {
    // 获取原始 foo 函数地址
    INFO("Start hooking...\n");
    
    void *handle = dlopen(NULL, RTLD_NOW);
    
    #define DO_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS) dlsym(handle, OFFSET);
    #define STORE_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) FakeIt(dlsym(handle, OFFSET),(void**)&NAME);
    #include "functions.h"
    #undef DO_APP_FUNC
    #undef STORE_APP_FUNC
    
    INFO("Hook done!\n");
}


// ---
extern "C" std::map<std::string,std::string> getFuncMap() {
   std::map<std::string,std::string> hookFuncMap ={
    {
      "_ZN6common5minet6Packet14parseFromArrayEPKcj",
      "_Z19parseFromArray_FakePN6common5minet6PacketEPcj"
    },
    {
      "_ZNK6common5minet6Packet18doSerializeToArrayEPcj",
      "_Z23doSerializeToArray_FakePN6common5minet6PacketEPcj"
    },
    {
      "_ZNK5proto8UnionCmd10message_idEv",
      "_Z15message_id_FakePN5proto8UnionCmdE"
    },
    {
      "_ZNK6google8protobuf10Descriptor19FindEnumValueByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",
      "_Z24FindEnumValueByName_FakePN6google8protobuf10DescriptorEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"
    }
  };
  std::map<std::string,std::string> protohookFuncMap=getProtoHookMap();
  
  hookFuncMap.insert(protohookFuncMap.begin(),protohookFuncMap.end());
  return hookFuncMap;
}

// ---


