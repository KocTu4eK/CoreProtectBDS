/**
 * @file  SpawnData.hpp
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
 * @brief MC class SpawnData.
 *
 */
class SpawnData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    class SpawnData& operator=(class SpawnData const &) = delete;
    SpawnData() = delete;
#endif

public:
    /**
     * @symbol ??0SpawnData@@QEAA@AEBVCompoundTag@@@Z
     * @hash   1953238614
     */
    MCAPI SpawnData(class CompoundTag const &);
    /**
     * @symbol ??0SpawnData@@QEAA@AEBV0@@Z
     * @hash   1745587729
     */
    MCAPI SpawnData(class SpawnData const &);
    /**
     * @symbol ?save@SpawnData@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -392926486
     */
    MCAPI std::unique_ptr<class CompoundTag> save();

};