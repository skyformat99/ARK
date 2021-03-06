﻿#include "SDK/Interface/AFIPluginManager.h"
#include "AFCMsgModule.h"

namespace ark
{

    bool AFCMsgModule::Init()
    {
        m_pBusModule = pPluginManager->FindModule<AFIBusModule>();
        m_pNetServiceManagerModule = pPluginManager->FindModule<AFINetServiceManagerModule>();
        m_pLogModule = pPluginManager->FindModule<AFILogModule>();

        return true;
    }

    bool AFCMsgModule::SendSuitSSMsg(const uint8_t app_type, const std::string& hash_key, const int msg_id, const google::protobuf::Message& msg, const AFGUID& actor_id/* = 0*/)
    {
        uint32_t crc32 = CRC32(hash_key);
        return SendSuitSSMsg(app_type, crc32, msg_id, msg, actor_id);
    }

    bool AFCMsgModule::SendSuitSSMsg(const uint8_t app_type, const uint32_t& hash_value, const int msg_id, const google::protobuf::Message& msg, const AFGUID& actor_id/* = 0*/)
    {
        int suit_bus_id = 0; //GetSuitBus(app_type, hash_value);
        return SendSSMsg(suit_bus_id, msg_id, msg, actor_id);
    }

    bool AFCMsgModule::SendParticularSSMsg(const int bus_id, const int msg_id, const google::protobuf::Message& msg, const AFGUID& conn_id, const AFGUID& actor_id/* = 0*/)
    {
        std::string msg_data = msg.SerializeAsString();
        return SendSSMsg(bus_id, msg_id, msg, actor_id);
    }

    //////////////////////////////////////////////////////////////////////////

    bool AFCMsgModule::SendSSMsg(const int target_bus, const int msg_id, const google::protobuf::Message& msg, const AFGUID& conn_id, const AFGUID& actor_id/* = 0*/)
    {
        std::string msg_data;
        ARK_ASSERT_RET_VAL(msg.SerializeToString(&msg_data), false);

        int src_bus = m_pBusModule->GetSelfBusID();
#if ARK_RUN_MODE == ARK_RUN_MODE_DEBUG
        ARK_LOG_DEBUG("Send msg log\nsrc={}\ndst={}\nmsg_name={}\nmsg_id={}\nmsg_len={}\nmsg_data=\n{}",
                      AFMisc::Bus2Str(src_bus),
                      AFMisc::Bus2Str(target_bus),
                      msg.GetTypeName(),
                      msg_id,
                      msg_data.length(),
                      msg.DebugString());
#endif
        return SendSSMsg(src_bus, target_bus, msg_id, msg_data.c_str(), msg_data.length(), conn_id, actor_id);
    }

    bool AFCMsgModule::SendSSMsg(const int target_bus, const int msg_id, const char* msg, const int msg_len, const AFGUID& conn_id, const AFGUID& actor_id /*= 0*/)
    {
        return SendSSMsg(m_pBusModule->GetSelfBusID(), target_bus, msg_id, msg, msg_len, conn_id, actor_id);
    }

    bool AFCMsgModule::SendSSMsg(const int src_bus, const int target_bus, const int msg_id, const char* msg, const int msg_len, const AFGUID& conn_id, const AFGUID& actor_id/* = 0*/)
    {
        AFINet* net_ptr = m_pNetServiceManagerModule->GetNetConnectionBus(src_bus, target_bus);
        if (net_ptr != nullptr)
        {
            return net_ptr->SendRawMsg(msg_id, msg, msg_len, conn_id, actor_id);
        }

        ARK_LOG_ERROR("send ss msg error, src_bus={} target_bus={} msg_id={} conn_id={} target_role_id={}", src_bus, target_bus, msg_id, conn_id.ToString(), actor_id.ToString());
        return false;
    }

}