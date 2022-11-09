/**
 * @file  MoveToBlockGoal.hpp
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
 * @brief MC class MoveToBlockGoal.
 *
 */
class MoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOBLOCKGOAL
public:
    class MoveToBlockGoal& operator=(class MoveToBlockGoal const &) = delete;
    MoveToBlockGoal(class MoveToBlockGoal const &) = delete;
    MoveToBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1931791042
     */
    virtual ~MoveToBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MoveToBlockGoal@@UEAA_NXZ
     * @hash   -53283300
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveToBlockGoal@@UEAA_NXZ
     * @hash   686763658
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MoveToBlockGoal@@UEAAXXZ
     * @hash   -1981394507
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MoveToBlockGoal@@UEAAXXZ
     * @hash   -1092043275
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MoveToBlockGoal@@UEAAXXZ
     * @hash   -1253373200
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1616939212
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MoveToBlockGoal@@QEAA@AEAVMob@@MHHHHMVVec3@@MW4TargetSelectionMethod@@V?$vector@VActorDefinitionTrigger@@V?$allocator@VActorDefinitionTrigger@@@std@@@std@@3V?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@5@AEBVActorFilterGroup@@@Z
     * @hash   -826921749
     */
    MCAPI MoveToBlockGoal(class Mob &, float, int, int, int, int, float, class Vec3, float, enum class TargetSelectionMethod, std::vector<class ActorDefinitionTrigger>, std::vector<class ActorDefinitionTrigger>, std::vector<class ItemDescriptor>, class ActorFilterGroup const &);

//private:
    /**
     * @symbol ?_checkIfStuck@MoveToBlockGoal@@AEAAXXZ
     * @hash   -1885147538
     */
    MCAPI void _checkIfStuck();
    /**
     * @symbol ?_isValidTarget@MoveToBlockGoal@@AEBA_NAEBVBlock@@@Z
     * @hash   860167157
     */
    MCAPI bool _isValidTarget(class Block const &) const;
    /**
     * @symbol ?_moveToBlock@MoveToBlockGoal@@AEAAXXZ
     * @hash   1107926522
     */
    MCAPI void _moveToBlock();
    /**
     * @symbol ?_pathIsValid@MoveToBlockGoal@@AEAA_NPEBVPath@@@Z
     * @hash   -1861465856
     */
    MCAPI bool _pathIsValid(class Path const *);

private:

};