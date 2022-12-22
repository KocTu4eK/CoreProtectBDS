/**
 * @file  JumpInfo.hpp
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
 * @brief MC class JumpInfo.
 *
 */
class JumpInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINFO
public:
    class JumpInfo& operator=(class JumpInfo const &) = delete;
    JumpInfo(class JumpInfo const &) = delete;
    JumpInfo() = delete;
#endif

public:
    /**
     * @symbol ??0JumpInfo@@QEAA@MMHH@Z
     * @hash   623850368
     */
    MCAPI JumpInfo(float, float, int, int);
    /**
     * @symbol ?getAnimDuration@JumpInfo@@QEBAHXZ
     * @hash   1623225190
     */
    MCAPI int getAnimDuration() const;
    /**
     * @symbol ?getDistanceScale@JumpInfo@@QEBAMXZ
     * @hash   -321329722
     */
    MCAPI float getDistanceScale() const;
    /**
     * @symbol ?getHeight@JumpInfo@@QEBAMXZ
     * @hash   -2136903052
     */
    MCAPI float getHeight() const;
    /**
     * @symbol ?getJumpDelay@JumpInfo@@QEBAHXZ
     * @hash   -2088554920
     */
    MCAPI int getJumpDelay() const;

};