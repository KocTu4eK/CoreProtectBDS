/**
 * @file  VillagerBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerBase.
 *
 */
class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There
    enum class BiomeType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif

public:
    /**
     * @vftbl  11
     * @symbol ?reloadComponents@VillagerBase@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   2013520850
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1348017151
     */
    virtual ~VillagerBase();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @hash   -182486203
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @hash   -130769027
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @hash   -135209808
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -132439245
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -102886573
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @hash   1337741896
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @hash   1331454073
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1359906400
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  138
     * @symbol ?onLightningHit@VillagerBase@@UEAAXXZ
     * @hash   805314232
     */
    virtual void onLightningHit();
    /**
     * @vftbl  141
     * @symbol ?handleEntityEvent@VillagerBase@@UEAAXW4ActorEvent@@H@Z
     * @hash   2068902639
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @hash   1593557213
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  220
     * @hash   -2032751088
     */
    virtual void __unk_vfn_220();
    /**
     * @vftbl  221
     * @hash   -2018004543
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  247
     * @hash   -2005177115
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl  250
     * @hash   -739509363
     */
    virtual void __unk_vfn_250();
    /**
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@VillagerBase@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1757582352
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@VillagerBase@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1352649229
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl  282
     * @symbol ?_onSizeUpdated@VillagerBase@@EEAAXXZ
     * @hash   1318814126
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  283
     * @hash   -1894354595
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  314
     * @hash   -1156359450
     */
    virtual void __unk_vfn_314();
    /**
     * @vftbl  348
     * @hash   -1073989257
     */
    virtual void __unk_vfn_348();
    /**
     * @vftbl  358
     * @symbol ?_serverAiMobStep@VillagerBase@@MEAAXXZ
     * @hash   -1470469093
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @symbol ?interactPreventDefault@VillagerBase@@UEAA_NXZ
     * @hash   745006673
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?useNewAi@VillagerBase@@UEBA_NXZ
     * @hash   1758833874
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0VillagerBase@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1540542973
     */
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?consumeLoveFood@VillagerBase@@QEAAXXZ
     * @hash   1605028931
     */
    MCAPI void consumeLoveFood();
    /**
     * @symbol ?getBreedingStackIndex@VillagerBase@@QEBAHXZ
     * @hash   348076150
     */
    MCAPI int getBreedingStackIndex() const;
    /**
     * @symbol ?isChasing@VillagerBase@@QEBA_NXZ
     * @hash   55403716
     */
    MCAPI bool isChasing() const;
    /**
     * @symbol ?isWillingToBreed@VillagerBase@@QEAA_N_N@Z
     * @hash   -1449299805
     */
    MCAPI bool isWillingToBreed(bool);
    /**
     * @symbol ?setChasing@VillagerBase@@QEAAX_N@Z
     * @hash   -148832902
     */
    MCAPI void setChasing(bool);
    /**
     * @symbol ?setWillingToBreed@VillagerBase@@QEAAX_N@Z
     * @hash   1013065828
     */
    MCAPI void setWillingToBreed(bool);
    /**
     * @symbol ?stopGoals@VillagerBase@@QEAAXXZ
     * @hash   -1069705149
     */
    MCAPI void stopGoals();
    /**
     * @symbol ?BiomeStrToEnum@VillagerBase@@SA?AW4BiomeType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -551494333
     */
    MCAPI static enum class VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    /**
     * @symbol ?_addParticlesAroundSelf@VillagerBase@@AEAAXW4ParticleType@@@Z
     * @hash   954515235
     */
    MCAPI void _addParticlesAroundSelf(enum class ParticleType);

private:

};