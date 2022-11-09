/**
 * @file  ScoreboardEventCoordinator.hpp
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
 * @brief MC class ScoreboardEventCoordinator.
 *
 */
class ScoreboardEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTCOORDINATOR
public:
    class ScoreboardEventCoordinator& operator=(class ScoreboardEventCoordinator const &) = delete;
    ScoreboardEventCoordinator(class ScoreboardEventCoordinator const &) = delete;
    ScoreboardEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?sendOnObjectiveAdded@ScoreboardEventCoordinator@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1833281740
     */
    MCAPI void sendOnObjectiveAdded(std::string const &);
    /**
     * @symbol ?sendOnObjectiveRemoved@ScoreboardEventCoordinator@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   276884860
     */
    MCAPI void sendOnObjectiveRemoved(std::string const &);
    /**
     * @symbol ?sendOnScoreChanged@ScoreboardEventCoordinator@@QEAAXAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -784249706
     */
    MCAPI void sendOnScoreChanged(struct ScoreboardId const &, std::string const &, int);
    /**
     * @symbol ?sendOnScoreboardIdentityRemoved@ScoreboardEventCoordinator@@QEAAXAEBUScoreboardId@@@Z
     * @hash   -1613974674
     */
    MCAPI void sendOnScoreboardIdentityRemoved(struct ScoreboardId const &);

};