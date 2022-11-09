/**
 * @file  PlayerMovementRateSystem.hpp
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
 * @brief MC structure PlayerMovementRateSystem.
 *
 */
struct PlayerMovementRateSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTRATESYSTEM
public:
    struct PlayerMovementRateSystem& operator=(struct PlayerMovementRateSystem const &) = delete;
    PlayerMovementRateSystem(struct PlayerMovementRateSystem const &) = delete;
    PlayerMovementRateSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1827849271
     */
    virtual ~PlayerMovementRateSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@PlayerMovementRateSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -454656545
     */
    virtual void tick(class EntityRegistry &);

};