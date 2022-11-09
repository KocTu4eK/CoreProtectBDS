/**
 * @file  ActorAliasDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorAliasDescription.
 *
 */
struct ActorAliasDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    ActorAliasDescription(struct ActorAliasDescription const &) = delete;
    ActorAliasDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   782167535
     */
    virtual ~ActorAliasDescription();
    /**
     * @vftbl  1
     * @symbol ?getJsonName@ActorAliasDescription@@UEBAPEBDXZ
     * @hash   392210371
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol ?getAliasInfo@ActorAliasDescription@@QEBAPEBUAliasInfoDescription@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -824435816
     */
    MCAPI struct AliasInfoDescription const * getAliasInfo(std::string const &) const;
    /**
     * @symbol ??4ActorAliasDescription@@QEAAAEAU0@AEBU0@@Z
     * @hash   1139694526
     */
    MCAPI struct ActorAliasDescription & operator=(struct ActorAliasDescription const &);
    /**
     * @symbol ?parse@ActorAliasDescription@@QEAAXAEAVValue@Json@@_N@Z
     * @hash   784497429
     */
    MCAPI void parse(class Json::Value &, bool);

};