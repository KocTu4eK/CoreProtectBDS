/**
 * @file  InternalTaskGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalTaskGroup.
 *
 */
class InternalTaskGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALTASKGROUP
public:
    class InternalTaskGroup& operator=(class InternalTaskGroup const &) = delete;
    InternalTaskGroup(class InternalTaskGroup const &) = delete;
    InternalTaskGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   633115403
     */
    virtual ~InternalTaskGroup();
    /**
     * @vftbl  1
     * @hash   -975730255
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -974806734
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1015370653
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1014447132
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?getState@InternalTaskGroup@@UEBA?AW4TaskGroupState@@XZ
     * @hash   799855719
     */
    virtual enum class TaskGroupState getState() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALTASKGROUP
    /**
     * @symbol ?processCoroutines@InternalTaskGroup@@UEAAXXZ
     * @hash   1193072468
     */
    MCVAPI void processCoroutines();
    /**
     * @symbol ?queue@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@$$QEAV?$function@$$A6AXXZ@3@@Z
     * @hash   -1737399289
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    /**
     * @symbol ?queueSync@InternalTaskGroup@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBU?$TaskStartInfoEx@X@@$$QEAV?$function@$$A6A?AVTaskResult@@XZ@3@@Z
     * @hash   -243509964
     */
    MCVAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    /**
     * @symbol ?requeueTask@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
     * @hash   -2044589613
     */
    MCVAPI void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /**
     * @symbol ?taskComplete@InternalTaskGroup@@UEAAXV?$not_null@PEAVBackgroundTaskBase@@@gsl@@@Z
     * @hash   1490284452
     */
    MCVAPI void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    /**
     * @symbol ?taskRegister@InternalTaskGroup@@UEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   -918336892
     */
    MCVAPI void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
#endif

};