/**
 * @file  ScriptingEventCoordinator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptingEventCoordinator.
 *
 */
class ScriptingEventCoordinator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGEVENTCOORDINATOR
public:
    class ScriptingEventCoordinator& operator=(class ScriptingEventCoordinator const &) = delete;
    ScriptingEventCoordinator(class ScriptingEventCoordinator const &) = delete;
    ScriptingEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?getScriptingEventHandler@ScriptingEventCoordinator@@QEAAAEAVScriptingEventHandler@@XZ
     * @hash   1177881754
     */
    MCAPI class ScriptingEventHandler & getScriptingEventHandler();
    /**
     * @symbol ?registerScriptingEventHandler@ScriptingEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VScriptingEventHandler@@U?$default_delete@VScriptingEventHandler@@@std@@@std@@@Z
     * @hash   641189792
     */
    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler> &&);
    /**
     * @symbol ?sendEvent@ScriptingEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableScriptingGameplayEvent@W4CoordinatorResult@@@@@@@Z
     * @hash   1226487113
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableScriptingGameplayEvent<enum class CoordinatorResult>>);

};