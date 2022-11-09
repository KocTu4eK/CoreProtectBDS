/**
 * @file  SummonActorGoal.hpp
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
 * @brief MC class SummonActorGoal.
 *
 */
class SummonActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONACTORGOAL
public:
    class SummonActorGoal& operator=(class SummonActorGoal const &) = delete;
    SummonActorGoal(class SummonActorGoal const &) = delete;
    SummonActorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -445584491
     */
    virtual ~SummonActorGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SummonActorGoal@@UEAA_NXZ
     * @hash   -754451815
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SummonActorGoal@@UEAA_NXZ
     * @hash   -13712937
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SummonActorGoal@@UEAAXXZ
     * @hash   470118466
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SummonActorGoal@@UEAAXXZ
     * @hash   1360284626
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SummonActorGoal@@UEAAXXZ
     * @hash   1199031581
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SummonActorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -156223913
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SummonActorGoal@@QEAA@AEAVMob@@AEBV?$vector@USummonSpellData@@V?$allocator@USummonSpellData@@@std@@@std@@@Z
     * @hash   -1791100157
     */
    MCAPI SummonActorGoal(class Mob &, std::vector<struct SummonSpellData> const &);

//private:
    /**
     * @symbol ?_createSpellEntity@SummonActorGoal@@AEBAXMMMMMHUActorDefinitionIdentifier@@@Z
     * @hash   -1339153950
     */
    MCAPI void _createSpellEntity(float, float, float, float, float, int, struct ActorDefinitionIdentifier) const;
    /**
     * @symbol ?_selectBestSpell@SummonActorGoal@@AEBAHAEAVActor@@@Z
     * @hash   -1415174285
     */
    MCAPI int _selectBestSpell(class Actor &) const;

private:

};