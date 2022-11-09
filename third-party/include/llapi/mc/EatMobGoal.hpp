/**
 * @file  EatMobGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EatMobGoal.
 *
 */
class EatMobGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATMOBGOAL
public:
    class EatMobGoal& operator=(class EatMobGoal const &) = delete;
    EatMobGoal(class EatMobGoal const &) = delete;
    EatMobGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1926557701
     */
    virtual ~EatMobGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@EatMobGoal@@UEAA_NXZ
     * @hash   -199581931
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@EatMobGoal@@UEAA_NXZ
     * @hash   273287939
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@EatMobGoal@@UEAAXXZ
     * @hash   -960201106
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@EatMobGoal@@UEAAXXZ
     * @hash   -646112690
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@EatMobGoal@@UEAAXXZ
     * @hash   -1164012519
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@EatMobGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -139672645
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0EatMobGoal@@QEAA@AEAVMob@@@Z
     * @hash   1438275506
     */
    MCAPI EatMobGoal(class Mob &);

};