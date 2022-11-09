/**
 * @file  BookCloningRecipe.hpp
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
 * @brief MC class BookCloningRecipe.
 *
 */
class BookCloningRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKCLONINGRECIPE
public:
    class BookCloningRecipe& operator=(class BookCloningRecipe const &) = delete;
    BookCloningRecipe(class BookCloningRecipe const &) = delete;
    BookCloningRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1982186259
     */
    virtual ~BookCloningRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   1582408621
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@BookCloningRecipe@@UEBAHXZ
     * @hash   842579381
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@BookCloningRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   -418246346
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   -1781435358
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol ?matches@BookCloningRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   164447431
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol ?size@BookCloningRecipe@@UEBAHXZ
     * @hash   800470685
     */
    virtual int size() const;
    /**
     * @symbol ??0BookCloningRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     * @hash   573510839
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol ??0BookCloningRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1320736540
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?ID@BookCloningRecipe@@2VUUID@mce@@B
     * @hash   1821838111
     */
    MCAPI static class mce::UUID const ID;

};