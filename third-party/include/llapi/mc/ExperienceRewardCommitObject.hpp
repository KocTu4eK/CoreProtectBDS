/**
 * @file  ExperienceRewardCommitObject.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceRewardCommitObject.
 *
 */
class ExperienceRewardCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDCOMMITOBJECT
public:
    class ExperienceRewardCommitObject& operator=(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject(class ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1749428729
     */
    virtual ~ExperienceRewardCommitObject();
    /**
     * @vftbl  1
     * @symbol ?append@ExperienceRewardCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
     * @hash   -1809865804
     */
    virtual bool append(class ContainerValidationCommitObject *);
    /**
     * @vftbl  2
     * @symbol ?canCommit@ExperienceRewardCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -1509178083
     */
    virtual bool canCommit(class ContainerScreenContext const &) const;
    /**
     * @vftbl  3
     * @symbol ?commit@ExperienceRewardCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
     * @hash   1886309024
     */
    virtual void commit(class ContainerScreenContext const &);
    /**
     * @symbol ??0ExperienceRewardCommitObject@@QEAA@H@Z
     * @hash   102087808
     */
    MCAPI ExperienceRewardCommitObject(int);

};