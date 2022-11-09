/**
 * @file  RaidBossSystem.hpp
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
 * @brief MC class RaidBossSystem.
 *
 */
class RaidBossSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSSYSTEM
public:
    class RaidBossSystem& operator=(class RaidBossSystem const &) = delete;
    RaidBossSystem(class RaidBossSystem const &) = delete;
    RaidBossSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1806195984
     */
    virtual ~RaidBossSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@RaidBossSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -117551370
     */
    virtual void tick(class EntityRegistry &);

};