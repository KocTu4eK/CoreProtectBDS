/**
 * @file  TakeFlowerGoal.hpp
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
 * @brief MC class TakeFlowerGoal.
 *
 */
class TakeFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEFLOWERGOAL
public:
    class TakeFlowerGoal& operator=(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal(class TakeFlowerGoal const &) = delete;
    TakeFlowerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1617651775
     */
    virtual ~TakeFlowerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@TakeFlowerGoal@@UEAA_NXZ
     * @hash   -1298102021
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@TakeFlowerGoal@@UEAA_NXZ
     * @hash   -1240445687
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@TakeFlowerGoal@@UEAAXXZ
     * @hash   -1360052764
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@TakeFlowerGoal@@UEAAXXZ
     * @hash   -104990268
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@TakeFlowerGoal@@UEAAXXZ
     * @hash   -310856273
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@TakeFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2067587035
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0TakeFlowerGoal@@QEAA@AEAVMob@@@Z
     * @hash   934080824
     */
    MCAPI TakeFlowerGoal(class Mob &);

};