/**
 * @file  SpikeFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpikeFeature.
 *
 */
class SpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There
public:
class EndSpike {
public:
    EndSpike() = delete;
    EndSpike(EndSpike const&) = delete;
    EndSpike(EndSpike const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    class SpikeFeature& operator=(class SpikeFeature const &) = delete;
    SpikeFeature(class SpikeFeature const &) = delete;
    SpikeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1792509530
     */
    virtual ~SpikeFeature();
    /**
     * @vftbl  3
     * @symbol ?place@SpikeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1213504486
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0SpikeFeature@@QEAA@AEBVEndSpike@0@@Z
     * @hash   492024489
     */
    MCAPI SpikeFeature(class SpikeFeature::EndSpike const &);
    /**
     * @symbol ?placeManually@SpikeFeature@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
     * @hash   1336856851
     */
    MCAPI bool placeManually(class BlockSource &, class BlockPos const &, class Random &, class Actor *);
    /**
     * @symbol ?postProcessMobsAt@SpikeFeature@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -533064206
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?setCrystalBeamTarget@SpikeFeature@@QEAAXAEBVBlockPos@@@Z
     * @hash   -595843916
     */
    MCAPI void setCrystalBeamTarget(class BlockPos const &);
    /**
     * @symbol ?setCrystalInvulnerable@SpikeFeature@@QEAAX_N@Z
     * @hash   -14759076
     */
    MCAPI void setCrystalInvulnerable(bool);

};