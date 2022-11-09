/**
 * @file  BaseGameVersion.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SemVersion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseGameVersion.
 *
 */
class BaseGameVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0BaseGameVersion@@QEAA@XZ
     * @hash   -411054159
     */
    MCAPI BaseGameVersion();
    /**
     * @symbol ??0BaseGameVersion@@QEAA@GII@Z
     * @hash   1190172457
     */
    MCAPI BaseGameVersion(unsigned short, unsigned int, unsigned int);
    /**
     * @symbol ??0BaseGameVersion@@QEAA@AEBVSemVersion@@@Z
     * @hash   -642862868
     */
    MCAPI BaseGameVersion(class SemVersion const &);
    /**
     * @symbol ??0BaseGameVersion@@QEAA@AEBV0@@Z
     * @hash   148955697
     */
    MCAPI BaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?asSemVersion@BaseGameVersion@@QEBAAEBVSemVersion@@XZ
     * @hash   1832453928
     */
    MCAPI class SemVersion const & asSemVersion() const;
    /**
     * @symbol ?asString@BaseGameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1679056846
     */
    MCAPI std::string const & asString() const;
    /**
     * @symbol ?getMajor@BaseGameVersion@@QEBAGXZ
     * @hash   1433962299
     */
    MCAPI unsigned short getMajor() const;
    /**
     * @symbol ?getMinor@BaseGameVersion@@QEBAGXZ
     * @hash   314574403
     */
    MCAPI unsigned short getMinor() const;
    /**
     * @symbol ?getPatch@BaseGameVersion@@QEBAGXZ
     * @hash   1663029305
     */
    MCAPI unsigned short getPatch() const;
    /**
     * @symbol ?isAnyVersion@BaseGameVersion@@QEBA_NXZ
     * @hash   2049981174
     */
    MCAPI bool isAnyVersion() const;
    /**
     * @symbol ?isCompatibleWith@BaseGameVersion@@QEBA_NAEBV1@@Z
     * @hash   -588724715
     */
    MCAPI bool isCompatibleWith(class BaseGameVersion const &) const;
    /**
     * @symbol ?isValid@BaseGameVersion@@QEBA_NXZ
     * @hash   1854574980
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??9BaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -1660413081
     */
    MCAPI bool operator!=(class BaseGameVersion const &) const;
    /**
     * @symbol ??MBaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -1609447805
     */
    MCAPI bool operator<(class BaseGameVersion const &) const;
    /**
     * @symbol ??NBaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -2080115801
     */
    MCAPI bool operator<=(class BaseGameVersion const &) const;
    /**
     * @symbol ??4BaseGameVersion@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1775615108
     */
    MCAPI class BaseGameVersion & operator=(class BaseGameVersion const &);
    /**
     * @symbol ??8BaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -396467614
     */
    MCAPI bool operator==(class BaseGameVersion const &) const;
    /**
     * @symbol ??OBaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -1624545309
     */
    MCAPI bool operator>(class BaseGameVersion const &) const;
    /**
     * @symbol ??PBaseGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -377464245
     */
    MCAPI bool operator>=(class BaseGameVersion const &) const;
    /**
     * @symbol ??1BaseGameVersion@@QEAA@XZ
     * @hash   1973439937
     */
    MCAPI ~BaseGameVersion();
    /**
     * @symbol ?ANY@BaseGameVersion@@2V1@B
     * @hash   663477109
     */
    MCAPI static class BaseGameVersion const ANY;
    /**
     * @symbol ?EMPTY@BaseGameVersion@@2V1@B
     * @hash   1606170999
     */
    MCAPI static class BaseGameVersion const EMPTY;
    /**
     * @symbol ?INCOMPATIBLE@BaseGameVersion@@2V1@B
     * @hash   -1851420243
     */
    MCAPI static class BaseGameVersion const INCOMPATIBLE;
    /**
     * @symbol ?fromString@BaseGameVersion@@SA?AW4MatchType@SemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@@Z
     * @hash   -2087304090
     */
    MCAPI static enum class SemVersion::MatchType fromString(std::string const &, class BaseGameVersion &);

};