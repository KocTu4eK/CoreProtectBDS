/**
 * @file  CompoundItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundItem.
 *
 */
class CompoundItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDITEM
public:
    class CompoundItem& operator=(class CompoundItem const &) = delete;
    CompoundItem(class CompoundItem const &) = delete;
    CompoundItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1623001768
     */
    virtual ~CompoundItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
     * @hash   -2091149052
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1985923540
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1375123140
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@CompoundItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -1695999179
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @symbol ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
     * @hash   2069395781
     */
    MCAPI CompoundItem(std::string const &, int, class Experiments const &);
    /**
     * @symbol ?getCompoundType@CompoundItem@@SA?AW4CompoundType@@AEBVItemDescriptor@@@Z
     * @hash   660493515
     */
    MCAPI static enum class CompoundType getCompoundType(class ItemDescriptor const &);
    /**
     * @symbol ?getIngredientForCompound@CompoundItem@@SA?AVRecipeIngredient@@W4CompoundType@@@Z
     * @hash   405721509
     */
    MCAPI static class RecipeIngredient getIngredientForCompound(enum class CompoundType);
    /**
     * @symbol ?getItemForCompound@CompoundItem@@SA?AVItemInstance@@W4CompoundType@@H@Z
     * @hash   -715656674
     */
    MCAPI static class ItemInstance getItemForCompound(enum class CompoundType, int);
    /**
     * @symbol ?isCompoundItem@CompoundItem@@SA_NAEBVItemStackBase@@@Z
     * @hash   -637037631
     */
    MCAPI static bool isCompoundItem(class ItemStackBase const &);
    /**
     * @symbol ?unregisterSpecialCompounds@CompoundItem@@SAXXZ
     * @hash   1851223891
     */
    MCAPI static void unregisterSpecialCompounds();

//private:
    /**
     * @symbol ?_registerSpecialCompound@CompoundItem@@AEAAXAEBVItemInstance@@W4CompoundType@@@Z
     * @hash   134139494
     */
    MCAPI void _registerSpecialCompound(class ItemInstance const &, enum class CompoundType);
    /**
     * @symbol ?_registerSpecialCompounds@CompoundItem@@AEAAXAEBVExperiments@@@Z
     * @hash   120310276
     */
    MCAPI void _registerSpecialCompounds(class Experiments const &);
    /**
     * @symbol ?_getName@CompoundItem@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CompoundType@@@Z
     * @hash   -402670053
     */
    MCAPI static std::string _getName(enum class CompoundType);

private:
    /**
     * @symbol ?mIdToSpecialCompound@CompoundItem@@0V?$unordered_map@HHU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@A
     * @hash   -1106259755
     */
    MCAPI static class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, int>>> mIdToSpecialCompound;
    /**
     * @symbol ?mTypeToSpecialCompound@CompoundItem@@0V?$unordered_map@HVItemInstance@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHVItemInstance@@@std@@@3@@std@@A
     * @hash   566103280
     */
    MCAPI static class std::unordered_map<int, class ItemInstance, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class ItemInstance>>> mTypeToSpecialCompound;

};