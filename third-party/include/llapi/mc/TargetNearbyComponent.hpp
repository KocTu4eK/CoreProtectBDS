/**
 * @file  TargetNearbyComponent.hpp
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
 * @brief MC class TargetNearbyComponent.
 *
 */
class TargetNearbyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYCOMPONENT
public:
    class TargetNearbyComponent& operator=(class TargetNearbyComponent const &) = delete;
    TargetNearbyComponent(class TargetNearbyComponent const &) = delete;
    TargetNearbyComponent() = delete;
#endif

public:
    /**
     * @symbol ?getWasInsideRange@TargetNearbyComponent@@QEBA_NXZ
     * @hash   2138168628
     */
    MCAPI bool getWasInsideRange() const;
    /**
     * @symbol ?getWasOutsideRange@TargetNearbyComponent@@QEBA_NXZ
     * @hash   -965179386
     */
    MCAPI bool getWasOutsideRange() const;
    /**
     * @symbol ?getWasSeenLastTick@TargetNearbyComponent@@QEBA_NXZ
     * @hash   -1732163770
     */
    MCAPI bool getWasSeenLastTick() const;
    /**
     * @symbol ?setPreviousDistance@TargetNearbyComponent@@QEAAXM@Z
     * @hash   1183490264
     */
    MCAPI void setPreviousDistance(float);
    /**
     * @symbol ?setWasInsideRange@TargetNearbyComponent@@QEAAX_N@Z
     * @hash   -1363870104
     */
    MCAPI void setWasInsideRange(bool);
    /**
     * @symbol ?setWasOutsideRange@TargetNearbyComponent@@QEAAX_N@Z
     * @hash   792189958
     */
    MCAPI void setWasOutsideRange(bool);
    /**
     * @symbol ?setWasSeenLastTick@TargetNearbyComponent@@QEAAX_N@Z
     * @hash   -406587146
     */
    MCAPI void setWasSeenLastTick(bool);

};