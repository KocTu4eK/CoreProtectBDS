/**
 * @file  EntityExitVolumeSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityExitVolumeSystem.
 *
 */
class EntityExitVolumeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYEXITVOLUMESYSTEM
public:
    class EntityExitVolumeSystem& operator=(class EntityExitVolumeSystem const &) = delete;
    EntityExitVolumeSystem(class EntityExitVolumeSystem const &) = delete;
    EntityExitVolumeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1379829748
     */
    virtual ~EntityExitVolumeSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@EntityExitVolumeSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   723894282
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ??0EntityExitVolumeSystem@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
     * @hash   501280215
     */
    MCAPI EntityExitVolumeSystem(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

//private:
    /**
     * @symbol ?_tick@EntityExitVolumeSystem@@AEBAXAEAVEntityContext@@AEAVVolumeBoundsComponent@@AEAVEntitiesInsideVolumeComponent@@@Z
     * @hash   -638385911
     */
    MCAPI void _tick(class EntityContext &, class VolumeBoundsComponent &, class EntitiesInsideVolumeComponent &) const;

private:

};