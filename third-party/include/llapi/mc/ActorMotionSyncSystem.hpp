/**
 * @file  ActorMotionSyncSystem.hpp
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
 * @brief MC class ActorMotionSyncSystem.
 *
 */
class ActorMotionSyncSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOTIONSYNCSYSTEM
public:
    class ActorMotionSyncSystem& operator=(class ActorMotionSyncSystem const &) = delete;
    ActorMotionSyncSystem(class ActorMotionSyncSystem const &) = delete;
    ActorMotionSyncSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -130918045
     */
    virtual ~ActorMotionSyncSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@ActorMotionSyncSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1818413403
     */
    virtual void tick(class EntityRegistry &);

};