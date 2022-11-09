/**
 * @file  ItemStackRequestAction.hpp
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
 * @brief MC class ItemStackRequestAction.
 *
 */
class ItemStackRequestAction {

#define AFTER_EXTRA
    // Add Member There
public:
    ItemStackRequestActionType mType;

    static inline std::unordered_map<enum class ItemStackRequestActionType, std::string> const& getActionTypeMap() {
        return actionTypeMap.mMap1;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTION
public:
    class ItemStackRequestAction& operator=(class ItemStackRequestAction const &) = delete;
    ItemStackRequestAction(class ItemStackRequestAction const &) = delete;
    ItemStackRequestAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1375268550
     */
    virtual ~ItemStackRequestAction();
    /**
     * @vftbl  1
     * @symbol ?getCraftAction@ItemStackRequestAction@@UEBAPEBVItemStackRequestActionCraftBase@@XZ
     * @hash   817225600
     */
    virtual class ItemStackRequestActionCraftBase const * getCraftAction() const;
    /**
     * @vftbl  2
     * @symbol ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
     * @hash   -902678561
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl  3
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestAction@@UEAAXAEAVBlockPalette@@_N@Z
     * @hash   -2112326396
     */
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
    /**
     * @symbol ??0ItemStackRequestAction@@QEAA@W4ItemStackRequestActionType@@@Z
     * @hash   -1567729205
     */
    MCAPI ItemStackRequestAction(enum class ItemStackRequestActionType);
    /**
     * @symbol ?getActionType@ItemStackRequestAction@@QEBA?AW4ItemStackRequestActionType@@XZ
     * @hash   1222051280
     */
    MCAPI enum class ItemStackRequestActionType getActionType() const;
    /**
     * @symbol ?write@ItemStackRequestAction@@QEBAXAEAVBinaryStream@@@Z
     * @hash   538339656
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ?getActionTypeName@ItemStackRequestAction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ItemStackRequestActionType@@@Z
     * @hash   -324619587
     */
    MCAPI static std::string const getActionTypeName(enum class ItemStackRequestActionType);
    /**
     * @symbol ?read@ItemStackRequestAction@@SA?AV?$unique_ptr@VItemStackRequestAction@@U?$default_delete@VItemStackRequestAction@@@std@@@std@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1067181807
     */
    MCAPI static std::unique_ptr<class ItemStackRequestAction> read(class ReadOnlyBinaryStream &);

//private:

private:
    /**
     * @symbol ?actionTypeMap@ItemStackRequestAction@@0V?$BidirectionalUnorderedMap@W4ItemStackRequestActionType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     * @hash   -857895949
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ItemStackRequestActionType, std::string> const actionTypeMap;

};