/**
 * @file  NetworkStackLatencyPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkStackLatencyPacket.
 *
 */
class NetworkStackLatencyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSTACKLATENCYPACKET
public:
    class NetworkStackLatencyPacket& operator=(class NetworkStackLatencyPacket const &) = delete;
    NetworkStackLatencyPacket(class NetworkStackLatencyPacket const &) = delete;
    NetworkStackLatencyPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1187092506
     */
    virtual ~NetworkStackLatencyPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@NetworkStackLatencyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   128822482
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@NetworkStackLatencyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1874929535
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@NetworkStackLatencyPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   87205448
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@NetworkStackLatencyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   695471496
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};