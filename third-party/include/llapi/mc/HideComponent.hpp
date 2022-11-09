/**
 * @file  HideComponent.hpp
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
 * @brief MC class HideComponent.
 *
 */
class HideComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDECOMPONENT
public:
    class HideComponent& operator=(class HideComponent const &) = delete;
    HideComponent(class HideComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0HideComponent@@QEAA@XZ
     * @hash   1546626823
     */
    MCAPI HideComponent();
    /**
     * @symbol ?addAdditionalSaveData@HideComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1958165528
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?initFromDefinition@HideComponent@@QEAAXAEAVActor@@@Z
     * @hash   -791946494
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isInRaid@HideComponent@@QEAA_NXZ
     * @hash   132635402
     */
    MCAPI bool isInRaid();
    /**
     * @symbol ?isReactingToBell@HideComponent@@QEAA_NXZ
     * @hash   -1975172358
     */
    MCAPI bool isReactingToBell();
    /**
     * @symbol ?readAdditionalSaveData@HideComponent@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1341711077
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setInRaid@HideComponent@@QEAAXXZ
     * @hash   2629351
     */
    MCAPI void setInRaid();
    /**
     * @symbol ?setNotHiding@HideComponent@@QEAAXXZ
     * @hash   69672147
     */
    MCAPI void setNotHiding();
    /**
     * @symbol ?setReactingToBell@HideComponent@@QEAAXXZ
     * @hash   1105318507
     */
    MCAPI void setReactingToBell();

};