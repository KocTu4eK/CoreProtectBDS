/**
 * @file  CrashDumpLogUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpLogUtils.
 *
 */
class CrashDumpLogUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPLOGUTILS
public:
    class CrashDumpLogUtils& operator=(class CrashDumpLogUtils const &) = delete;
    CrashDumpLogUtils(class CrashDumpLogUtils const &) = delete;
    CrashDumpLogUtils() = delete;
#endif

public:
    /**
     * @symbol ?getTagFromOptions@CrashDumpLogUtils@@SA?AW4CrashDumpLogStringID@@_KV?$span@$$CBW4CrashDumpLogStringID@@$0?0@gsl@@@Z
     * @hash   -536608433
     */
    MCAPI static enum CrashDumpLogStringID getTagFromOptions(unsigned __int64, class gsl::span<enum CrashDumpLogStringID const, -1>);

};