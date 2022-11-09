/**
 * @file  RequestChunkRadiusPacket.hpp
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
 * @brief MC class RequestChunkRadiusPacket.
 *
 */
class RequestChunkRadiusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTCHUNKRADIUSPACKET
public:
    class RequestChunkRadiusPacket& operator=(class RequestChunkRadiusPacket const &) = delete;
    RequestChunkRadiusPacket(class RequestChunkRadiusPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1954794818
     */
    virtual ~RequestChunkRadiusPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@RequestChunkRadiusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   426773894
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@RequestChunkRadiusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -684073933
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@RequestChunkRadiusPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -583483900
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@RequestChunkRadiusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2133722132
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RequestChunkRadiusPacket@@QEAA@XZ
     * @hash   -1920171996
     */
    MCAPI RequestChunkRadiusPacket();

};