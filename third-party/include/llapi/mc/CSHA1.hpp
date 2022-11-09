/**
 * @file  CSHA1.hpp
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
 * @brief MC class CSHA1.
 *
 */
class CSHA1 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    class CSHA1& operator=(class CSHA1 const &) = delete;
    CSHA1(class CSHA1 const &) = delete;
#endif

public:
    /**
     * @symbol ??0CSHA1@@QEAA@XZ
     * @hash   -987113772
     */
    MCAPI CSHA1();
    /**
     * @symbol ?Final@CSHA1@@QEAAXXZ
     * @hash   -1396109343
     */
    MCAPI void Final();
    /**
     * @symbol ?GetHash@CSHA1@@QEBAPEAEXZ
     * @hash   -1958065249
     */
    MCAPI unsigned char * GetHash() const;
    /**
     * @symbol ?Reset@CSHA1@@QEAAXXZ
     * @hash   -1530221341
     */
    MCAPI void Reset();
    /**
     * @symbol ?Update@CSHA1@@QEAAXPEBEI@Z
     * @hash   -1180673870
     */
    MCAPI void Update(unsigned char const *, unsigned int);
    /**
     * @symbol ??1CSHA1@@QEAA@XZ
     * @hash   1254326036
     */
    MCAPI ~CSHA1();

//private:
    /**
     * @symbol ?Transform@CSHA1@@AEAAXPEAIPEBE@Z
     * @hash   -2094059856
     */
    MCAPI void Transform(unsigned int *, unsigned char const *);

private:

};