/**
 * @file  TaskGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskGroup.
 *
 */
class TaskGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKGROUP
public:
    class TaskGroup& operator=(class TaskGroup const &) = delete;
    TaskGroup(class TaskGroup const &) = delete;
    TaskGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   253939912
     */
    virtual ~TaskGroup();
    /**
     * @vftbl  1
     * @symbol ?queue@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     * @hash   1750298644
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @vftbl  2
     * @symbol ?queueSync@TaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     * @hash   264532263
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @vftbl  3
     * @symbol ?taskRegister@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   1721266529
     */
    virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @vftbl  4
     * @symbol ?requeueTask@TaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     * @hash   -1803552986
     */
    virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @vftbl  5
     * @symbol ?getState@TaskGroup@@UEBA?AW4TaskGroupState@@XZ
     * @hash   -1631582966
     */
    virtual enum class TaskGroupState getState() const;
    /**
     * @vftbl  6
     * @symbol ?processCoroutines@TaskGroup@@UEAAXXZ
     * @hash   1586031815
     */
    virtual void processCoroutines();
    /**
     * @vftbl  7
     * @symbol ?taskComplete@TaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
     * @hash   -1298876319
     */
    virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    /**
     * @symbol ??0TaskGroup@@QEAA@AEAVWorkerPool@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   205335669
     */
    MCAPI TaskGroup(class WorkerPool &, class Scheduler &, std::string);
    /**
     * @symbol ?disableOwnerThreadChecks@TaskGroup@@QEAAXXZ
     * @hash   -670859773
     */
    MCAPI void disableOwnerThreadChecks();
    /**
     * @symbol ?flush@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   302605628
     */
    MCAPI void flush(class std::function<void (void)>);
    /**
     * @symbol ?getName@TaskGroup@@QEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1582793712
     */
    MCAPI class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @symbol ?getScheduler@TaskGroup@@QEAAAEAVScheduler@@XZ
     * @hash   1648863402
     */
    MCAPI class Scheduler & getScheduler();
    /**
     * @symbol ?isEmpty@TaskGroup@@QEBA_NXZ
     * @hash   -1715206070
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?pause@TaskGroup@@QEAAXXZ
     * @hash   1374707089
     */
    MCAPI void pause();
    /**
     * @symbol ?queue@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     * @hash   1353953591
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @symbol ?queueSync@TaskGroup@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     * @hash   721000610
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&);
    /**
     * @symbol ?sync_DEPRECATED_ASK_TOMMO@TaskGroup@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   -902809140
     */
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);
    /**
     * @symbol ?queueChildSync_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     * @hash   -168886313
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @symbol ?queueChild_DEPRECATED@TaskGroup@@SA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     * @hash   2116215932
     */
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);

//private:
    /**
     * @symbol ?_forAllTasks@TaskGroup@@AEAAXAEAV?$UniqueLock@Vmutex@std@@@Threading@Bedrock@@V?$function@$$A6AXAEBV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z@std@@@Z
     * @hash   -1821429066
     */
    MCAPI void _forAllTasks(class Bedrock::Threading::UniqueLock<class std::mutex> &, class std::function<void (class std::shared_ptr<class BackgroundTaskBase> const &)>);
    /**
     * @symbol ?_isEmptyInternal@TaskGroup@@AEBA_NXZ
     * @hash   -738513844
     */
    MCAPI bool _isEmptyInternal() const;
    /**
     * @symbol ?_queueInternal@TaskGroup@@AEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   -1671679019
     */
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?getCurrentTaskGroup@TaskGroup@@CAPEAVIBackgroundTaskOwner@@XZ
     * @hash   1120421668
     */
    MCAPI static class IBackgroundTaskOwner * getCurrentTaskGroup();

private:

};