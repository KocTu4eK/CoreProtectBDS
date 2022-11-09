/**
 * @file  MapLockingRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapLockingRecipe.
 *
 */
class MapLockingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPLOCKINGRECIPE
public:
    class MapLockingRecipe& operator=(class MapLockingRecipe const &) = delete;
    MapLockingRecipe(class MapLockingRecipe const &) = delete;
    MapLockingRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1162373613
     */
    virtual ~MapLockingRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@MapLockingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   1987842199
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@MapLockingRecipe@@UEBAHXZ
     * @hash   1866277851
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@MapLockingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   -1308080564
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@MapLockingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   -1707336968
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol ?matches@MapLockingRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   -1671607171
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol ?size@MapLockingRecipe@@UEBAHXZ
     * @hash   -1080523949
     */
    virtual int size() const;
    /**
     * @symbol ??0MapLockingRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     * @hash   1949588113
     */
    MCAPI MapLockingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol ?CartographyTableID@MapLockingRecipe@@2VUUID@mce@@B
     * @hash   1832434491
     */
    MCAPI static class mce::UUID const CartographyTableID;

};