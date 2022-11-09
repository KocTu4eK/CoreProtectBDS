/**
 * @file  TridentImpalerEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TridentImpalerEnchant.
 *
 */
class TridentImpalerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTIMPALERENCHANT
public:
    class TridentImpalerEnchant& operator=(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant(class TridentImpalerEnchant const &) = delete;
    TridentImpalerEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   708641269
     */
    virtual ~TridentImpalerEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@TridentImpalerEnchant@@UEBAHH@Z
     * @hash   297623024
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@TridentImpalerEnchant@@UEBAHH@Z
     * @hash   882998590
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@TridentImpalerEnchant@@UEBAHXZ
     * @hash   1616979258
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDamageBonus@TridentImpalerEnchant@@UEBAMHAEBVActor@@@Z
     * @hash   33278022
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vftbl  10
     * @hash   -339307949
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -330249563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -329326042
     */
    virtual void __unk_vfn_13();
    /**
     * @symbol ??0TridentImpalerEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     * @hash   -1499972077
     */
    MCAPI TridentImpalerEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};