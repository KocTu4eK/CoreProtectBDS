/**
 * @file  InventoryContentPacket.hpp
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
 * @brief MC class InventoryContentPacket.
 *
 */
class InventoryContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYCONTENTPACKET
public:
    class InventoryContentPacket& operator=(class InventoryContentPacket const &) = delete;
    InventoryContentPacket(class InventoryContentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1108684975
     */
    virtual ~InventoryContentPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@InventoryContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -144497927
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@InventoryContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -661565018
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@InventoryContentPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   2015409505
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@InventoryContentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   986007441
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0InventoryContentPacket@@QEAA@XZ
     * @hash   1831851393
     */
    MCAPI InventoryContentPacket();
    /**
     * @symbol ??0InventoryContentPacket@@QEAA@W4ContainerID@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   -338794799
     */
    MCAPI InventoryContentPacket(enum class ContainerID, std::vector<class ItemStack> const &);
    /**
     * @symbol ?fromPlayerInventoryId@InventoryContentPacket@@SA?AV1@W4ContainerID@@AEAVPlayer@@@Z
     * @hash   261438768
     */
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum class ContainerID, class Player &);

};