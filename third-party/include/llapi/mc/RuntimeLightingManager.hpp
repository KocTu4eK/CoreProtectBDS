/**
 * @file  RuntimeLightingManager.hpp
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
 * @brief MC class RuntimeLightingManager.
 *
 */
class RuntimeLightingManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMELIGHTINGMANAGER
public:
    class RuntimeLightingManager& operator=(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager(class RuntimeLightingManager const &) = delete;
    RuntimeLightingManager() = delete;
#endif

public:
    /**
     * @symbol ??0RuntimeLightingManager@@QEAA@AEAVDimension@@@Z
     * @hash   1947343864
     */
    MCAPI RuntimeLightingManager(class Dimension &);
    /**
     * @symbol ?flushRunTimeLighting@RuntimeLightingManager@@QEAAXXZ
     * @hash   1438644533
     */
    MCAPI void flushRunTimeLighting();
    /**
     * @symbol ?updateBlockLight@RuntimeLightingManager@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
     * @hash   -1421888986
     */
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);
    /**
     * @symbol ??1RuntimeLightingManager@@QEAA@XZ
     * @hash   1807505203
     */
    MCAPI ~RuntimeLightingManager();

//private:
    /**
     * @symbol ?_checkForRelightingTask@RuntimeLightingManager@@AEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   -823189872
     */
    MCAPI void _checkForRelightingTask(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol ?_getListOfChunksWithPlayerDistance@RuntimeLightingManager@@AEAAXXZ
     * @hash   224894977
     */
    MCAPI void _getListOfChunksWithPlayerDistance();
    /**
     * @symbol ?_relightChunks@RuntimeLightingManager@@AEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   285794314
     */
    MCAPI void _relightChunks(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol ?_removeProcessedSubchunks@RuntimeLightingManager@@AEAAXXZ
     * @hash   -1910545698
     */
    MCAPI void _removeProcessedSubchunks();

private:

};