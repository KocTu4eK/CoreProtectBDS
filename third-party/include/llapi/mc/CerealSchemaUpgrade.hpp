/**
 * @file  CerealSchemaUpgrade.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealSchemaUpgrade.
 *
 */
class CerealSchemaUpgrade {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADE
public:
    class CerealSchemaUpgrade& operator=(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1752406505
     */
    virtual ~CerealSchemaUpgrade();
    /**
     * @vftbl  1
     * @hash   1967983905
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol ?upgradeToNext@CerealSchemaUpgrade@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
     * @hash   -334450035
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;
    /**
     * @symbol ??0CerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   -1287759250
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const &, std::string const &);
    /**
     * @symbol ?bindLegacySchema@CerealSchemaUpgrade@@QEAAXAEAVSchemaFactory@reflection@@@Z
     * @hash   509604576
     */
    MCAPI void bindLegacySchema(class reflection::SchemaFactory &);
    /**
     * @symbol ?getPreviousVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     * @hash   2042142972
     */
    MCAPI class SemVersion const & getPreviousVersion() const;
    /**
     * @symbol ?getPreviousVersionString@CerealSchemaUpgrade@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   979449364
     */
    MCAPI std::string const & getPreviousVersionString() const;
    /**
     * @symbol ?getSchemaKey@CerealSchemaUpgrade@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1297198092
     */
    MCAPI std::string const & getSchemaKey() const;
    /**
     * @symbol ?getTargetVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     * @hash   1991122732
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @symbol ?registerLegacySchema@CerealSchemaUpgrade@@QEAAXXZ
     * @hash   -688001811
     */
    MCAPI void registerLegacySchema();
    /**
     * @symbol ?setPreviousVersion@CerealSchemaUpgrade@@QEAAXAEBVSemVersion@@@Z
     * @hash   -1869193132
     */
    MCAPI void setPreviousVersion(class SemVersion const &);

};