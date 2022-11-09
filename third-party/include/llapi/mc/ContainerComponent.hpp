/**
 * @file  ContainerComponent.hpp
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
 * @brief MC class ContainerComponent.
 *
 */
class ContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCOMPONENT
public:
    class ContainerComponent& operator=(class ContainerComponent const &) = delete;
    ContainerComponent(class ContainerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerComponent@@UEAAXH@Z
     * @hash   -1657035736
     */
    virtual void containerContentChanged(int);
    /**
     * @symbol ??0ContainerComponent@@QEAA@XZ
     * @hash   487528664
     */
    MCAPI ContainerComponent();
    /**
     * @symbol ??0ContainerComponent@@QEAA@$$QEAV0@@Z
     * @hash   554810625
     */
    MCAPI ContainerComponent(class ContainerComponent &&);
    /**
     * @symbol ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
     * @hash   952616153
     */
    MCAPI class FillingContainer * _getRawContainerPtr();
    /**
     * @symbol ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -476117576
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVBlockSource@@AEAVItemStack@@HH@Z
     * @hash   -1883733570
     */
    MCAPI bool addItem(class BlockSource &, class ItemStack &, int, int);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
     * @hash   -492365291
     */
    MCAPI bool addItem(class ItemActor &);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
     * @hash   768139823
     */
    MCAPI bool addItem(class ItemStack &);
    /**
     * @symbol ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
     * @hash   198927274
     */
    MCAPI bool canBeSiphonedFrom() const;
    /**
     * @symbol ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
     * @hash   -1922914276
     */
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    /**
     * @symbol ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   -570111167
     */
    MCAPI int countItemsOfType(class ItemStack const &) const;
    /**
     * @symbol ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     * @hash   -752762600
     */
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @symbol ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   1494353425
     */
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @symbol ?getContainerSize@ContainerComponent@@QEBAHXZ
     * @hash   -780569048
     */
    MCAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
     * @hash   -1769997725
     */
    MCAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     * @hash   -1410271758
     */
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
     * @hash   -400043859
     */
    MCAPI bool hasRoomForItem(class ItemActor const &);
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
     * @hash   -1111014809
     */
    MCAPI bool hasRoomForItem(class ItemStack const &);
    /**
     * @symbol ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
     * @hash   1228095018
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isEmpty@ContainerComponent@@QEBA_NXZ
     * @hash   1844784078
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isPrivate@ContainerComponent@@QEBA_NXZ
     * @hash   -727771702
     */
    MCAPI bool isPrivate() const;
    /**
     * @symbol ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     * @hash   1224076442
     */
    MCAPI bool openContainer(class Actor &, class Player &);
    /**
     * @symbol ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1778916100
     */
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1366583410
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
     * @hash   1533959322
     */
    MCAPI void rebuildContainer(class Actor &, enum class ContainerType, int, bool, int, bool);
    /**
     * @symbol ?removeItem@ContainerComponent@@QEAAXHH@Z
     * @hash   -2037197699
     */
    MCAPI void removeItem(int, int);
    /**
     * @symbol ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
     * @hash   -1144454581
     */
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    /**
     * @symbol ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   1165664152
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1762710366
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @symbol ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
     * @hash   394288074
     */
    MCAPI bool setItem(int, class ItemStack const &);
    /**
     * @symbol ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -231818185
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -1590479929
     */
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

};