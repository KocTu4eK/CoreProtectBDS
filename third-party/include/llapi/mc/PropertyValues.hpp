/**
 * @file  PropertyValues.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PropertyValues.
 *
 */
struct PropertyValues {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYVALUES
public:
    struct PropertyValues& operator=(struct PropertyValues const &) = delete;
    PropertyValues() = delete;
#endif

public:
    /**
     * @symbol ??0PropertyValues@@QEAA@AEBU0@@Z
     * @hash   -1417593905
     */
    MCAPI PropertyValues(struct PropertyValues const &);
    /**
     * @symbol ??4PropertyValues@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   145103106
     */
    MCAPI struct PropertyValues & operator=(struct PropertyValues &&);
    /**
     * @symbol ?resize@PropertyValues@@QEAAX_K000@Z
     * @hash   2085494617
     */
    MCAPI void resize(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    /**
     * @symbol ??1PropertyValues@@QEAA@XZ
     * @hash   -1222346255
     */
    MCAPI ~PropertyValues();

};