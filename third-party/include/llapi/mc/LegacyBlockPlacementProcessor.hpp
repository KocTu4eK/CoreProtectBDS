/**
 * @file  LegacyBlockPlacementProcessor.hpp
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
 * @brief MC class LegacyBlockPlacementProcessor.
 *
 */
class LegacyBlockPlacementProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLOCKPLACEMENTPROCESSOR
public:
    class LegacyBlockPlacementProcessor& operator=(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;
#endif

public:
    /**
     * @symbol ??0LegacyBlockPlacementProcessor@@QEAA@AEBVLegacyStructureSettings@@@Z
     * @hash   1553552494
     */
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);
    /**
     * @symbol ?applyBlockRules@LegacyBlockPlacementProcessor@@QEAAPEBVBlock@@AEAVBlockSource@@AEAVBlockPos@@PEBV2@AEBV4@@Z
     * @hash   2011652716
     */
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);
    /**
     * @symbol ?applyGravity@LegacyBlockPlacementProcessor@@QEBAAEAVBlockPos@@AEAVBlockSource@@HAEAV2@@Z
     * @hash   -387547080
     */
    MCAPI class BlockPos & applyGravity(class BlockSource &, int, class BlockPos &) const;
    /**
     * @symbol ?canPlace@LegacyBlockPlacementProcessor@@QEAA_NXZ
     * @hash   1768260254
     */
    MCAPI bool canPlace();
    /**
     * @symbol ??1LegacyBlockPlacementProcessor@@QEAA@XZ
     * @hash   -472157587
     */
    MCAPI ~LegacyBlockPlacementProcessor();

};