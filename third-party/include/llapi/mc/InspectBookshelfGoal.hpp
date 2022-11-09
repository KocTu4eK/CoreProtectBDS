/**
 * @file  InspectBookshelfGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InspectBookshelfGoal.
 *
 */
class InspectBookshelfGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSPECTBOOKSHELFGOAL
public:
    class InspectBookshelfGoal& operator=(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -556366294
     */
    virtual ~InspectBookshelfGoal();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@InspectBookshelfGoal@@UEAA_NXZ
     * @hash   -1024446114
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  6
     * @symbol ?tick@InspectBookshelfGoal@@UEAAXXZ
     * @hash   -354776412
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@InspectBookshelfGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1248292560
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1348196983
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@InspectBookshelfGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1189714898
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  13
     * @symbol ?_canReach@InspectBookshelfGoal@@MEAA_NAEBVBlockPos@@@Z
     * @hash   1144071734
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol ?findTargetBlock@InspectBookshelfGoal@@UEAA_NXZ
     * @hash   1913566204
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0InspectBookshelfGoal@@QEAA@AEAVMob@@MHHHM@Z
     * @hash   747115458
     */
    MCAPI InspectBookshelfGoal(class Mob &, float, int, int, int, float);

};