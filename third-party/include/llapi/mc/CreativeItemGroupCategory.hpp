/**
 * @file  CreativeItemGroupCategory.hpp
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
 * @brief MC class CreativeItemGroupCategory.
 *
 */
class CreativeItemGroupCategory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMGROUPCATEGORY
public:
    class CreativeItemGroupCategory& operator=(class CreativeItemGroupCategory const &) = delete;
    CreativeItemGroupCategory(class CreativeItemGroupCategory const &) = delete;
#endif

public:
    /**
     * @symbol ??0CreativeItemGroupCategory@@QEAA@XZ
     * @hash   -827540377
     */
    MCAPI CreativeItemGroupCategory();
    /**
     * @symbol ??0CreativeItemGroupCategory@@QEAA@PEAVCreativeItemRegistry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CreativeItemCategory@@@Z
     * @hash   -28257901
     */
    MCAPI CreativeItemGroupCategory(class CreativeItemRegistry *, std::string const &, enum class CreativeItemCategory);
    /**
     * @symbol ?addAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
     * @hash   1470731839
     */
    MCAPI class CreativeGroupInfo * addAnonymousGroup();
    /**
     * @symbol ?addChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@AEBVItemInstance@@@Z
     * @hash   -2102008359
     */
    MCAPI class CreativeGroupInfo * addChildGroup(class HashedString const &, class ItemInstance const &);
    /**
     * @symbol ?getChildGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@AEBVHashedString@@@Z
     * @hash   -324291496
     */
    MCAPI class CreativeGroupInfo * getChildGroup(class HashedString const &);
    /**
     * @symbol ?getCreativeCategory@CreativeItemGroupCategory@@QEAA?AW4CreativeItemCategory@@XZ
     * @hash   2007194736
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory();
    /**
     * @symbol ?getOrAddTailAnonymousGroup@CreativeItemGroupCategory@@QEAAPEAVCreativeGroupInfo@@XZ
     * @hash   1088814139
     */
    MCAPI class CreativeGroupInfo * getOrAddTailAnonymousGroup();

};