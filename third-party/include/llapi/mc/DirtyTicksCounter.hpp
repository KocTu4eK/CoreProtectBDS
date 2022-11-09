/**
 * @file  DirtyTicksCounter.hpp
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
 * @brief MC structure DirtyTicksCounter.
 *
 */
struct DirtyTicksCounter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRTYTICKSCOUNTER
public:
    struct DirtyTicksCounter& operator=(struct DirtyTicksCounter const &) = delete;
    DirtyTicksCounter(struct DirtyTicksCounter const &) = delete;
#endif

public:
    /**
     * @symbol ??0DirtyTicksCounter@@QEAA@XZ
     * @hash   -1678647116
     */
    MCAPI DirtyTicksCounter();
    /**
     * @symbol ?getTicksSinceLastChange@DirtyTicksCounter@@QEBAHXZ
     * @hash   -1045344600
     */
    MCAPI int getTicksSinceLastChange() const;
    /**
     * @symbol ?getTotalDirtyTicks@DirtyTicksCounter@@QEBAHXZ
     * @hash   888679434
     */
    MCAPI int getTotalDirtyTicks() const;
    /**
     * @symbol ??EDirtyTicksCounter@@QEAAAEAU0@XZ
     * @hash   -2005526657
     */
    MCAPI struct DirtyTicksCounter & operator++();
    /**
     * @symbol ?reset@DirtyTicksCounter@@QEAAXXZ
     * @hash   1657009059
     */
    MCAPI void reset();
    /**
     * @symbol ?touch@DirtyTicksCounter@@QEAAXXZ
     * @hash   -2044857453
     */
    MCAPI void touch();
    /**
     * @symbol ?max@DirtyTicksCounter@@SA?AU1@XZ
     * @hash   1734396565
     */
    MCAPI static struct DirtyTicksCounter max();

};