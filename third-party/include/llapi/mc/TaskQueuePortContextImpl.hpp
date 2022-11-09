/**
 * @file  TaskQueuePortContextImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortContextImpl.
 *
 */
class TaskQueuePortContextImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTCONTEXTIMPL
public:
    class TaskQueuePortContextImpl& operator=(class TaskQueuePortContextImpl const &) = delete;
    TaskQueuePortContextImpl(class TaskQueuePortContextImpl const &) = delete;
    TaskQueuePortContextImpl() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?AddRef@TaskQueuePortContextImpl@@UEAAIXZ
     * @hash   1747900215
     */
    virtual unsigned int AddRef();
    /**
     * @vftbl  1
     * @symbol ?Release@TaskQueuePortContextImpl@@UEAAIXZ
     * @hash   -1993579668
     */
    virtual unsigned int Release();
    /**
     * @vftbl  2
     * @symbol ?QueryApi@TaskQueuePortContextImpl@@UEAAJW4ApiId@@PEAPEAX@Z
     * @hash   1594710216
     */
    virtual long QueryApi(enum class ApiId, void **);
    /**
     * @vftbl  3
     * @symbol ?GetType@TaskQueuePortContextImpl@@UEAA?AW4XTaskQueuePort@@XZ
     * @hash   -421363462
     */
    virtual enum class XTaskQueuePort GetType();
    /**
     * @vftbl  4
     * @symbol ?GetStatus@TaskQueuePortContextImpl@@UEAA?AW4TaskQueuePortStatus@@XZ
     * @hash   1389932862
     */
    virtual enum class TaskQueuePortStatus GetStatus();
    /**
     * @vftbl  5
     * @symbol ?GetQueue@TaskQueuePortContextImpl@@UEAAPEAUITaskQueue@@XZ
     * @hash   -2131261760
     */
    virtual struct ITaskQueue * GetQueue();
    /**
     * @vftbl  6
     * @symbol ?GetPort@TaskQueuePortContextImpl@@UEAAPEAUITaskQueuePort@@XZ
     * @hash   1055100667
     */
    virtual struct ITaskQueuePort * GetPort();
    /**
     * @vftbl  7
     * @symbol ?TrySetStatus@TaskQueuePortContextImpl@@UEAA_NW4TaskQueuePortStatus@@0@Z
     * @hash   970287488
     */
    virtual bool TrySetStatus(enum class TaskQueuePortStatus, enum class TaskQueuePortStatus);
    /**
     * @vftbl  8
     * @symbol ?SetStatus@TaskQueuePortContextImpl@@UEAAXW4TaskQueuePortStatus@@@Z
     * @hash   -1983006942
     */
    virtual void SetStatus(enum class TaskQueuePortStatus);
    /**
     * @vftbl  9
     * @symbol ?ItemQueued@TaskQueuePortContextImpl@@UEAAXXZ
     * @hash   1119196043
     */
    virtual void ItemQueued();
    /**
     * @vftbl  10
     * @symbol ?AddSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
     * @hash   -1903990030
     */
    virtual bool AddSuspend();
    /**
     * @vftbl  11
     * @symbol ?RemoveSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
     * @hash   -1347141809
     */
    virtual bool RemoveSuspend();

};