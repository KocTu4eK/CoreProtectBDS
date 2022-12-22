/**
 * @file  SpinLock.hpp
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
 * @brief MC class SpinLock.
 *
 */
class SpinLock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPINLOCK
public:
    class SpinLock& operator=(class SpinLock const &) = delete;
    SpinLock(class SpinLock const &) = delete;
#endif

public:
    /**
     * @symbol ??0SpinLock@@QEAA@XZ
     * @hash   -37799079
     */
    MCAPI SpinLock();
    /**
     * @symbol ?lock@SpinLock@@QEAAXXZ
     * @hash   1589545109
     */
    MCAPI void lock();
    /**
     * @symbol ?try_lock@SpinLock@@QEAA_NXZ
     * @hash   -1260759006
     */
    MCAPI bool try_lock();
    /**
     * @symbol ?unlock@SpinLock@@QEAAXXZ
     * @hash   -594420731
     */
    MCAPI void unlock();
    /**
     * @symbol ??1SpinLock@@QEAA@XZ
     * @hash   1361127127
     */
    MCAPI ~SpinLock();

//private:
    /**
     * @symbol ?_getThreadId@SpinLock@@AEAA_KXZ
     * @hash   -341138947
     */
    MCAPI unsigned __int64 _getThreadId();

private:

};