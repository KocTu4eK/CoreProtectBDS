/**
 * @file  EquippableComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EquippableComponent.
 *
 */
class EquippableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPPABLECOMPONENT
public:
    class EquippableComponent& operator=(class EquippableComponent const &) = delete;
    EquippableComponent(class EquippableComponent const &) = delete;
    EquippableComponent() = delete;
#endif

public:
    /**
     * @symbol ??0EquippableComponent@@QEAA@$$QEAV0@@Z
     * @hash   -1300359105
     */
    MCAPI EquippableComponent(class EquippableComponent &&);
    /**
     * @symbol ?createDataPacket@EquippableComponent@@QEBA?AVUpdateEquipPacket@@AEAVActor@@W4ContainerID@@@Z
     * @hash   253441146
     */
    MCAPI class UpdateEquipPacket createDataPacket(class Actor &, enum class ContainerID) const;
    /**
     * @symbol ?createTag@EquippableComponent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVActor@@@Z
     * @hash   472348481
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor &) const;
    /**
     * @symbol ?getSlotCount@EquippableComponent@@QEBAHXZ
     * @hash   -1860308372
     */
    MCAPI int getSlotCount() const;
    /**
     * @symbol ?hasSlotAllowedItems@EquippableComponent@@QEBA_NH@Z
     * @hash   -1390440111
     */
    MCAPI bool hasSlotAllowedItems(int) const;
    /**
     * @symbol ?onItemChanged@EquippableComponent@@QEBA_NAEAVActor@@_KAEBVItemStack@@@Z
     * @hash   -1441144812
     */
    MCAPI bool onItemChanged(class Actor &, unsigned __int64, class ItemStack const &) const;
    /**
     * @symbol ??4EquippableComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1750127178
     */
    MCAPI class EquippableComponent & operator=(class EquippableComponent &&);
    /**
     * @symbol ?tryGetSlotAllowedItems@EquippableComponent@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
     * @hash   789071048
     */
    MCAPI std::vector<class ItemDescriptor> const * tryGetSlotAllowedItems(int) const;
    /**
     * @symbol ??1EquippableComponent@@QEAA@XZ
     * @hash   -1597159569
     */
    MCAPI ~EquippableComponent();

};