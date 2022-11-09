/**
 * @file  CommandSelectorBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <functional>
#include "ActorDefinitionIdentifier.hpp"
#include "CommandPosition.hpp"
#include "BlockPos.hpp"
class CommandOrigin;
class Actor;
class Player;

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandSelectorBase.
 *
 */
class CommandSelectorBase {

#define AFTER_EXTRA
    // Add Member There
public:
    uint32_t mVersion;
    uint32_t mType;
    uint32_t mOrder;
    std::vector<InvertableFilter<std::string>> mNameFilters;
    std::vector<InvertableFilter<ActorDefinitionIdentifier>> mTypeFilters;
    std::vector<InvertableFilter<std::string>> mFamilyFilters;
    std::vector<InvertableFilter<std::string>> mTagFilters;
    std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> mFilterChain;
    CommandPosition mPosition;
    BlockPos mBoxDeltas;
    float mRadiusMin;
    float mRadiusMax;
    uint64_t mCount;
    bool mIncludeDeadPlayers;
    bool mIsPositionBound;
    bool mDistanceFiltered;
    bool mHaveDeltas;
    bool mForcePlayer;
    bool mIsExplicitIdSelector;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTORBASE
public:
    class CommandSelectorBase& operator=(class CommandSelectorBase const &) = delete;
    CommandSelectorBase(class CommandSelectorBase const &) = delete;
    CommandSelectorBase() = delete;
#endif

public:
    /**
     * @symbol ?addFamilyFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     * @hash   1061542569
     */
    MCAPI void addFamilyFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addFilter@CommandSelectorBase@@QEAAXV?$function@$$A6A_NAEBVCommandOrigin@@AEBVActor@@@Z@std@@@Z
     * @hash   -508331639
     */
    MCAPI void addFilter(class std::function<bool (class CommandOrigin const &, class Actor const &)>);
    /**
     * @symbol ?addGameModeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@W4GameType@@@@@Z
     * @hash   -890813325
     */
    MCAPI void addGameModeFilter(struct InvertableFilter<enum class GameType> const &);
    /**
     * @symbol ?addHasItemFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVCommandIntegerRange@@W4EquipmentSlot@@1@Z
     * @hash   1725393595
     */
    MCAPI void addHasItemFilter(std::string const &, int, class CommandIntegerRange const &, enum class EquipmentSlot, class CommandIntegerRange const &);
    /**
     * @symbol ?addLevelFilter@CommandSelectorBase@@QEAAXAEBU?$pair@HH@std@@@Z
     * @hash   835564391
     */
    MCAPI void addLevelFilter(struct std::pair<int, int> const &);
    /**
     * @symbol ?addNameFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     * @hash   755168267
     */
    MCAPI void addNameFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addScoreFilter@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandIntegerRange@@V?$function@$$A6AHAEA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z@3@@Z
     * @hash   59604521
     */
    MCAPI void addScoreFilter(std::string const &, class CommandIntegerRange const &, class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @symbol ?addTagFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     * @hash   1207910899
     */
    MCAPI void addTagFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addTypeFilter@CommandSelectorBase@@QEAAXAEBU?$InvertableFilter@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@@Z
     * @hash   5554253
     */
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const &);
    /**
     * @symbol ?addXRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     * @hash   -1181843549
     */
    MCAPI void addXRotationFilter(struct std::pair<float, float> const &);
    /**
     * @symbol ?addYRotationFilter@CommandSelectorBase@@QEAAXAEBU?$pair@MM@std@@@Z
     * @hash   529680929
     */
    MCAPI void addYRotationFilter(struct std::pair<float, float> const &);
    /**
     * @symbol ?compile@CommandSelectorBase@@QEAA_NAEBVCommandOrigin@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1547028366
     */
    MCAPI bool compile(class CommandOrigin const &, std::string &);
    /**
     * @symbol ?getName@CommandSelectorBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   243648598
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ?getOrder@CommandSelectorBase@@QEBA?AW4CommandSelectionOrder@@XZ
     * @hash   -648617570
     */
    MCAPI enum class CommandSelectionOrder getOrder() const;
    /**
     * @symbol ?hasName@CommandSelectorBase@@QEBA_NXZ
     * @hash   -1840634664
     */
    MCAPI bool hasName() const;
    /**
     * @symbol ?isExplicitIdSelector@CommandSelectorBase@@QEBA_NXZ
     * @hash   636940042
     */
    MCAPI bool isExplicitIdSelector() const;
    /**
     * @symbol ?setBox@CommandSelectorBase@@QEAAXVBlockPos@@@Z
     * @hash   160049630
     */
    MCAPI void setBox(class BlockPos);
    /**
     * @symbol ?setExcludeAgents@CommandSelectorBase@@QEAAX_N@Z
     * @hash   -934599038
     */
    MCAPI void setExcludeAgents(bool);
    /**
     * @symbol ?setExplicitIdSelector@CommandSelectorBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -356656516
     */
    MCAPI void setExplicitIdSelector(std::string const &);
    /**
     * @symbol ?setIncludeDeadPlayers@CommandSelectorBase@@QEAAX_N@Z
     * @hash   1035359156
     */
    MCAPI void setIncludeDeadPlayers(bool);
    /**
     * @symbol ?setOrder@CommandSelectorBase@@QEAAXW4CommandSelectionOrder@@@Z
     * @hash   -1203674506
     */
    MCAPI void setOrder(enum class CommandSelectionOrder);
    /**
     * @symbol ?setPosition@CommandSelectorBase@@QEAAXAEBVCommandPosition@@@Z
     * @hash   1951232226
     */
    MCAPI void setPosition(class CommandPosition const &);
    /**
     * @symbol ?setRadiusMax@CommandSelectorBase@@QEAAXM@Z
     * @hash   -939234954
     */
    MCAPI void setRadiusMax(float);
    /**
     * @symbol ?setRadiusMin@CommandSelectorBase@@QEAAXM@Z
     * @hash   -83762486
     */
    MCAPI void setRadiusMin(float);
    /**
     * @symbol ?setResultCount@CommandSelectorBase@@QEAAX_K_N@Z
     * @hash   1282257480
     */
    MCAPI void setResultCount(unsigned __int64, bool);
    /**
     * @symbol ?setType@CommandSelectorBase@@QEAAXW4CommandSelectionType@@@Z
     * @hash   -424611608
     */
    MCAPI void setType(enum class CommandSelectionType);
    /**
     * @symbol ?setVersion@CommandSelectorBase@@QEAAXH@Z
     * @hash   -470742580
     */
    MCAPI void setVersion(int);
    /**
     * @symbol ??1CommandSelectorBase@@QEAA@XZ
     * @hash   -1172382361
     */
    MCAPI ~CommandSelectorBase();

//protected:
    /**
     * @symbol ??0CommandSelectorBase@@IEAA@_N@Z
     * @hash   594001585
     */
    MCAPI CommandSelectorBase(bool);
    /**
     * @symbol ?newResults@CommandSelectorBase@@IEBA?AV?$shared_ptr@V?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@std@@AEBVCommandOrigin@@@Z
     * @hash   -72865205
     */
    MCAPI class std::shared_ptr<std::vector<class Actor *>> newResults(class CommandOrigin const &) const;

//private:
    /**
     * @symbol ?compareName@CommandSelectorBase@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -96391184
     */
    MCAPI bool compareName(std::string const &) const;
    /**
     * @symbol ?filter@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@AEAVActor@@@Z
     * @hash   117524081
     */
    MCAPI bool filter(class CommandOrigin const &, class Actor &) const;
    /**
     * @symbol ?isExpansionAllowed@CommandSelectorBase@@AEBA_NAEBVCommandOrigin@@@Z
     * @hash   -1808280663
     */
    MCAPI bool isExpansionAllowed(class CommandOrigin const &) const;
    /**
     * @symbol ?matchFamily@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     * @hash   533913471
     */
    MCAPI bool matchFamily(class Actor const &) const;
    /**
     * @symbol ?matchName@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     * @hash   1842574072
     */
    MCAPI bool matchName(class Actor const &) const;
    /**
     * @symbol ?matchTag@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     * @hash   1571709171
     */
    MCAPI bool matchTag(class Actor const &) const;
    /**
     * @symbol ?matchType@CommandSelectorBase@@AEBA_NAEBVActor@@@Z
     * @hash   -107387111
     */
    MCAPI bool matchType(class Actor const &) const;

protected:

private:

};