/**
 * @file  StartGamePacket.hpp
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
 * @brief MC class StartGamePacket.
 *
 */
class StartGamePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGAMEPACKET
public:
    class StartGamePacket& operator=(class StartGamePacket const &) = delete;
    StartGamePacket(class StartGamePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1610078358
     */
    virtual ~StartGamePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@StartGamePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   960043730
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@StartGamePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -533326465
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@StartGamePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1308865560
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@StartGamePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1602663080
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0StartGamePacket@@QEAA@XZ
     * @hash   -1458447112
     */
    MCAPI StartGamePacket();
    /**
     * @symbol ??0StartGamePacket@@QEAA@AEBVLevelSettings@@UActorUniqueID@@VActorRuntimeID@@W4GameType@@_NAEBVVec3@@AEBVVec2@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@7AEBVContentIdentity@@7AEBVBlockDefinitionGroup@@4VCompoundTag@@AEBUPlayerMovementSettings@@7AEBVUUID@mce@@_KH_K@Z
     * @hash   -1119674405
     */
    MCAPI StartGamePacket(class LevelSettings const &, struct ActorUniqueID, class ActorRuntimeID, enum class GameType, bool, class Vec3 const &, class Vec2 const &, std::string const &, std::string const &, class ContentIdentity const &, std::string const &, class BlockDefinitionGroup const &, bool, class CompoundTag, struct PlayerMovementSettings const &, std::string const &, class mce::UUID const &, unsigned __int64, int, unsigned __int64);

};