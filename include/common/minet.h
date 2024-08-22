#include "proto/packet_head.pb.h"
#include <string.h>
#include <vector>
#include <map>
#include <atomic>
#include <thread>
namespace common {
    namespace minet {
      
        typedef std::shared_ptr<google::protobuf::Message> MessagePtr;
  
        struct Packet{
            int (**_vptr_Packet)(...);
            uint16_t cmd_id;
            char a1;
            char a2;
            char a3;
            char a4;
            char a5;
            char a6;
            proto::PacketHead head_;
            std::string recv_str;
            MessagePtr proto_ptr;
        };
    }
}

