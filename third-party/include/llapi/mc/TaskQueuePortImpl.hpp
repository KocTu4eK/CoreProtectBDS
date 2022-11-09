/**
 * @file  TaskQueuePortImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortImpl.
 *
 */
class TaskQueuePortImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL
public:
    class TaskQueuePortImpl& operator=(class TaskQueuePortImpl const &) = delete;
    TaskQueuePortImpl(class TaskQueuePortImpl const &) = delete;
#endif

public:
    /**
     * @vftbl  3
     * @symbol ?GetHandle@TaskQueuePortImpl@@UEAAPEAUXTaskQueuePortObject@@XZ
     * @hash   -1233606409
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @vftbl  4
     * @symbol ?QueueItem@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@IPEAXP6AX1_N@Z@Z
     * @hash   986772014
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @vftbl  5
     * @symbol ?RegisterWaitHandle@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
     * @hash   32125795
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @vftbl  6
     * @symbol ?UnregisterWaitHandle@TaskQueuePortImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
     * @hash   2012891727
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl  7
     * @symbol ?PrepareTerminate@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAXP6AX1@ZPEAPEAX@Z
     * @hash   1380223066
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @vftbl  8
     * @symbol ?CancelTermination@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   -146167040
     */
    virtual void CancelTermination(void *);
    /**
     * @vftbl  9
     * @symbol ?Terminate@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   1483460121
     */
    virtual void Terminate(void *);
    /**
     * @vftbl  10
     * @symbol ?Attach@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   -85781719
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  11
     * @symbol ?Detach@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   1320707043
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  12
     * @symbol ?DrainOneItem@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   1876197773
     */
    virtual bool DrainOneItem();
    /**
     * @vftbl  13
     * @symbol ?Wait@TaskQueuePortImpl@@UEAA_NPEAUITaskQueuePortContext@@I@Z
     * @hash   -585390037
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @vftbl  14
     * @symbol ?IsEmpty@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   -1920127073
     */
    virtual bool IsEmpty();
    /**
     * @vftbl  15
     * @symbol ?SuspendTermination@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   -1355652010
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  16
     * @symbol ?ResumeTermination@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   719729295
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  17
     * @hash   -2132124101
     */
    virtual ~TaskQueuePortImpl();
    /**
     * @symbol ?Initialize@TaskQueuePortImpl@@QEAAJW4XTaskQueueDispatchMode@@@Z
     * @hash   1121637428
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @symbol ??0TaskQueuePortImpl@@QEAA@XZ
     * @hash   -545733671
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @symbol ?AppendEntry@TaskQueuePortImpl@@AEAA_NAEBUQueueEntry@1@_K_N@Z
     * @hash   -1016856811
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @symbol ?AppendWaitRegistrationEntry@TaskQueuePortImpl@@AEAA_NPEAUWaitRegistration@1@_N@Z
     * @hash   -1909107609
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @symbol ?CancelPendingEntries@TaskQueuePortImpl@@AEAAXPEAUITaskQueuePortContext@@_N@Z
     * @hash   -679158090
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @symbol ?InitializeWaitRegistration@TaskQueuePortImpl@@AEAAJPEAUWaitRegistration@1@@Z
     * @hash   1624769851
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @symbol ?ScheduleTermination@TaskQueuePortImpl@@AEAAXPEAUTerminationEntry@1@@Z
     * @hash   -1037054220
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @symbol ?SubmitPendingCallback@TaskQueuePortImpl@@AEAAXXZ
     * @hash   -1317179501
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @symbol ?EraseQueue@TaskQueuePortImpl@@CAXPEAV?$LocklessQueue@UQueueEntry@TaskQueuePortImpl@@@@@Z
     * @hash   1343202114
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @symbol ?WaitCallback@TaskQueuePortImpl@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
     * @hash   1734408724
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};