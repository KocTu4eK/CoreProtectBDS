/**
 * @file  PrimedTnt.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PrimedTnt.
 *
 */
class PrimedTnt : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNT
public:
    class PrimedTnt& operator=(class PrimedTnt const &) = delete;
    PrimedTnt(class PrimedTnt const &) = delete;
    PrimedTnt() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@PrimedTnt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -386526136
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@PrimedTnt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1293648109
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  10
     * @symbol ?initializeComponents@PrimedTnt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -365311221
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   20535427
     */
    virtual ~PrimedTnt();
    /**
     * @vftbl  16
     * @symbol ?getOwnerEntityType@PrimedTnt@@UEAA?AW4ActorType@@XZ
     * @hash   1749428077
     */
    virtual enum class ActorType getOwnerEntityType();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  43
     * @symbol ?teleportTo@PrimedTnt@@UEAAXAEBVVec3@@_NHH1@Z
     * @hash   520601682
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @vftbl  48
     * @symbol ?normalTick@PrimedTnt@@UEAAXXZ
     * @hash   208225782
     */
    virtual void normalTick();
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
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@PrimedTnt@@UEAAMXZ
     * @hash   -1833310245
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl  79
     * @symbol ?getShadowRadius@PrimedTnt@@UEBAMXZ
     * @hash   -95812383
     */
    virtual float getShadowRadius() const;
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
     * @hash   -125227901
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  94
     * @symbol ?isPickable@PrimedTnt@@UEAA_NXZ
     * @hash   1046071097
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -95675229
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
     * @vftbl  171
     * @symbol ?getSourceUniqueID@PrimedTnt@@UEBA?AUActorUniqueID@@XZ
     * @hash   -403332127
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
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
     * @vftbl  269
     * @symbol ?_hurt@PrimedTnt@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   2045256459
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@PrimedTnt@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   584986075
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@PrimedTnt@@MEBAXAEAVCompoundTag@@@Z
     * @hash   -1374188014
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @symbol ??0PrimedTnt@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1515657537
     */
    MCAPI PrimedTnt(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@PrimedTnt@@QEAAXXZ
     * @hash   -1347132981
     */
    MCAPI void postNormalTick();

};