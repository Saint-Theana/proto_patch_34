//获取函数直接调用
DO_APP_FUNC("_ZN10ProtoUtils10getCmdNameB5cxx11Ej", std::string * , getCmdName, (uint32_t cmd_id));
DO_APP_FUNC("_ZN6common5minet6Packet8getProtoEv",google::protobuf::Message *,getProto,(uint16_t *cmd_id,common::minet::Packet *packet));


//将函数保存在别的位置，通过跳转来调用被hook的函数
STORE_APP_FUNC("_ZNK6google8protobuf14DescriptorPool18FindEnumTypeByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",google::protobuf::EnumDescriptor*,FindEnumTypeByName,(google::protobuf::DescriptorPool *_this,std::string *name));
STORE_APP_FUNC("_ZNK6google8protobuf10Descriptor19FindEnumValueByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",google::protobuf::EnumValueDescriptor*,FindEnumValueByName,(google::protobuf::Descriptor *_this,std::string *name));
STORE_APP_FUNC("_ZN6common5minet11PacketUtils12createPacketEPKcj",std::shared_ptr<common::minet::Packet> *,createPacket,(std::shared_ptr<common::minet::Packet> *pkt,char const* data, unsigned int len)); 
STORE_APP_FUNC("_ZN6common5minet6Packet14parseFromArrayEPKcj",int32_t,parseFromArray,(common::minet::Packet *pkt,char const* data, unsigned int len)); 
STORE_APP_FUNC("_ZNK13AppBaseConfig7isValidEv",bool,isValid,(AppBaseConfig *config)); 
STORE_APP_FUNC("_ZNK6common5minet6Packet18doSerializeToArrayEPcj",int32_t,doSerializeToArray,(common::minet::Packet *pkt,char* data, unsigned int len)); 
STORE_APP_FUNC("_ZNK5proto8UnionCmd10message_idEv",uint32_t,message_id,(proto::UnionCmd *_this)); 



