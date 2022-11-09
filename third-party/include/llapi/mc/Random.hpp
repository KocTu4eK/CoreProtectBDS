/**
 * @file  Random.hpp
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
 * @brief MC class Random.
 *
 */
class Random {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOM
public:
    class Random& operator=(class Random const &) = delete;
    Random(class Random const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
    /**
     * @symbol ?consumeCount@Random@@UEAAXI@Z
     * @hash   1543849971
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @symbol ?fork@Random@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     * @hash   -778469089
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ?nextBoolean@Random@@UEAA_NXZ
     * @hash   461247211
     */
    MCVAPI bool nextBoolean();
    /**
     * @symbol ?nextDouble@Random@@UEAANXZ
     * @hash   802540683
     */
    MCVAPI double nextDouble();
    /**
     * @symbol ?nextFloat@Random@@UEAAMXZ
     * @hash   -165627723
     */
    MCVAPI float nextFloat();
    /**
     * @symbol ?nextGaussianDouble@Random@@UEAANXZ
     * @hash   -609589770
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @symbol ?nextInt@Random@@UEAAHH@Z
     * @hash   -295581990
     */
    MCVAPI int nextInt(int);
    /**
     * @symbol ?nextInt@Random@@UEAAHXZ
     * @hash   1716460485
     */
    MCVAPI int nextInt();
    /**
     * @symbol ?nextLong@Random@@UEAA_JXZ
     * @hash   -689169630
     */
    MCVAPI __int64 nextLong();
    /**
     * @symbol ??1Random@@UEAA@XZ
     * @hash   1520156260
     */
    MCVAPI ~Random();
#endif
    /**
     * @symbol ??0Random@@QEAA@XZ
     * @hash   -322069937
     */
    MCAPI Random();
    /**
     * @symbol ??0Random@@QEAA@I_N@Z
     * @hash   -2105635301
     */
    MCAPI Random(unsigned int, bool);
    /**
     * @symbol ?nextFloat@Random@@QEAAMMM@Z
     * @hash   -1783684002
     */
    MCAPI float nextFloat(float, float);
    /**
     * @symbol ?nextGaussianFloat@Random@@QEAAMXZ
     * @hash   -1803438714
     */
    MCAPI float nextGaussianFloat();
    /**
     * @symbol ?nextGaussianInt@Random@@QEAAHH@Z
     * @hash   236745075
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @symbol ?nextInt@Random@@QEAAHHH@Z
     * @hash   -669234048
     */
    MCAPI int nextInt(int, int);
    /**
     * @symbol ?nextIntInclusive@Random@@QEAAHHH@Z
     * @hash   -1627188734
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @symbol ?getThreadLocal@Random@@SAAEAV1@XZ
     * @hash   1561133380
     */
    MCAPI static class Random & getThreadLocal();

//private:

private:
    /**
     * @symbol ?mThreadLocalRandom@Random@@0V?$ThreadLocalObject@VRandom@@V?$allocator@VRandom@@@std@@@Threading@Bedrock@@A
     * @hash   -1034962643
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>> mThreadLocalRandom;

};