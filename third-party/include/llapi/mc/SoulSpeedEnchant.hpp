/**
 * @file  SoulSpeedEnchant.hpp
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
 * @brief MC class SoulSpeedEnchant.
 *
 */
class SoulSpeedEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULSPEEDENCHANT
public:
    class SoulSpeedEnchant& operator=(class SoulSpeedEnchant const &) = delete;
    SoulSpeedEnchant(class SoulSpeedEnchant const &) = delete;
    SoulSpeedEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   212299887
     */
    virtual ~SoulSpeedEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@SoulSpeedEnchant@@UEBAHH@Z
     * @hash   1852420350
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@SoulSpeedEnchant@@UEBAHH@Z
     * @hash   -1229593652
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@SoulSpeedEnchant@@UEBAHXZ
     * @hash   -1913307764
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -332096605
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -338384428
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOULSPEEDENCHANT
    /**
     * @symbol ?isDiscoverable@SoulSpeedEnchant@@UEBA_NXZ
     * @hash   -130593504
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @symbol ?isTreasureOnly@SoulSpeedEnchant@@UEBA_NXZ
     * @hash   -1637214456
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol ??0SoulSpeedEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   1130135732
     */
    MCAPI SoulSpeedEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol ?SOUL_SPEED_BOOST_UUID@SoulSpeedEnchant@@2VUUID@mce@@B
     * @hash   1746499993
     */
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;
    /**
     * @symbol ?getLevel@SoulSpeedEnchant@@SAHAEBVActor@@@Z
     * @hash   -1952361033
     */
    MCAPI static int getLevel(class Actor const &);
    /**
     * @symbol ?getSpeedBoost@SoulSpeedEnchant@@SAMH@Z
     * @hash   -2113571253
     */
    MCAPI static float getSpeedBoost(int);
    /**
     * @symbol ?isActive@SoulSpeedEnchant@@SA_NAEBVActor@@@Z
     * @hash   900105489
     */
    MCAPI static bool isActive(class Actor const &);
    /**
     * @symbol ?shouldSpawnParticles@SoulSpeedEnchant@@SA_NAEBVActor@@@Z
     * @hash   -92168121
     */
    MCAPI static bool shouldSpawnParticles(class Actor const &);

};