/**
 * @file  PackInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackInstance.
 *
 */
class PackInstance {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCE
    char filler[480];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCE
public:
    class PackInstance& operator=(class PackInstance const &) = delete;
    PackInstance() = delete;
#endif

public:
    /**
     * @symbol ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@H_NPEAVPackSettings@@@Z
     * @hash   -48511185
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, int, bool, class PackSettings *);
    /**
     * @symbol ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NPEAVPackSettings@@@Z
     * @hash   -185860459
     */
    MCAPI PackInstance(class gsl::not_null<class Bedrock::NonOwnerPointer<class ResourcePack>>, std::string const &, bool, class PackSettings *);
    /**
     * @symbol ??0PackInstance@@QEAA@AEBV0@@Z
     * @hash   959032737
     */
    MCAPI PackInstance(class PackInstance const &);
    /**
     * @symbol ??0PackInstance@@QEAA@$$QEAV0@@Z
     * @hash   -1263373067
     */
    MCAPI PackInstance(class PackInstance &&);
    /**
     * @symbol ?forEachIn@PackInstance@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     * @hash   -1651922227
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @symbol ?getLoadTime@PackInstance@@QEBANXZ
     * @hash   -1299532754
     */
    MCAPI double getLoadTime() const;
    /**
     * @symbol ?getManifest@PackInstance@@QEAAAEAVPackManifest@@XZ
     * @hash   -591554532
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @symbol ?getManifest@PackInstance@@QEBAAEBVPackManifest@@XZ
     * @hash   623414490
     */
    MCAPI class PackManifest const & getManifest() const;
    /**
     * @symbol ?getPackCategory@PackInstance@@QEBA?AW4PackCategory@@XZ
     * @hash   -1120999496
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @symbol ?getPackId@PackInstance@@QEBA?BVUUID@mce@@XZ
     * @hash   -421994888
     */
    MCAPI class mce::UUID const getPackId() const;
    /**
     * @symbol ?getPackOrigin@PackInstance@@QEBA?AW4PackOrigin@@XZ
     * @hash   491286120
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol ?getPackStats@PackInstance@@QEAAAEAVPackStats@@XZ
     * @hash   -936231556
     */
    MCAPI class PackStats & getPackStats();
    /**
     * @symbol ?getPackStats@PackInstance@@QEBAAEBVPackStats@@XZ
     * @hash   -273404746
     */
    MCAPI class PackStats const & getPackStats() const;
    /**
     * @symbol ?getResource@PackInstance@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   158342786
     */
    MCAPI bool getResource(class Core::Path const &, std::string &) const;
    /**
     * @symbol ?getResourceLocation@PackInstance@@QEBAAEBVResourceLocation@@XZ
     * @hash   -121729028
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @symbol ?getSubpackFolderName@PackInstance@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   94346846
     */
    MCAPI std::string const & getSubpackFolderName() const;
    /**
     * @symbol ?getTierInfo@PackInstance@@QEBA?AVContentTierInfo@@XZ
     * @hash   211899792
     */
    MCAPI class ContentTierInfo getTierInfo() const;
    /**
     * @symbol ?getVersion@PackInstance@@QEBAAEBVSemVersion@@XZ
     * @hash   -1806251064
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @symbol ?hasResource@PackInstance@@QEBA_NAEBVPath@Core@@@Z
     * @hash   1066018481
     */
    MCAPI bool hasResource(class Core::Path const &) const;
    /**
     * @symbol ?isBaseGamePack@PackInstance@@QEBA_NXZ
     * @hash   1875774302
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @symbol ?isSlicePack@PackInstance@@QEBA_NXZ
     * @hash   -930797882
     */
    MCAPI bool isSlicePack() const;
    /**
     * @symbol ?isZipped@PackInstance@@QEBA_NXZ
     * @hash   1322163874
     */
    MCAPI bool isZipped() const;
    /**
     * @symbol ??8PackInstance@@QEBA_NAEBV0@@Z
     * @hash   -1459856519
     */
    MCAPI bool operator==(class PackInstance const &) const;
    /**
     * @symbol ?setLocale@PackInstance@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2029243086
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @symbol ??1PackInstance@@QEAA@XZ
     * @hash   479945832
     */
    MCAPI ~PackInstance();

//private:
    /**
     * @symbol ?_isPackPointerValid@PackInstance@@AEBA_NXZ
     * @hash   -1353942088
     */
    MCAPI bool _isPackPointerValid() const;

private:

};