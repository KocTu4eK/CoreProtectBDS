/**
 * @file  WaitTicksDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaitTicksDefinition.
 *
 */
class WaitTicksDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSDEFINITION
public:
    class WaitTicksDefinition& operator=(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition(class WaitTicksDefinition const &) = delete;
    WaitTicksDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1886038914
     */
    virtual ~WaitTicksDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@WaitTicksDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   1952144816
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};