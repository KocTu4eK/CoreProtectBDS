/**
 * @file  StructureEditorData.hpp
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
 * @brief MC class StructureEditorData.
 *
 */
class StructureEditorData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREEDITORDATA
public:
    class StructureEditorData& operator=(class StructureEditorData const &) = delete;
#endif

public:
    /**
     * @symbol ??0StructureEditorData@@QEAA@XZ
     * @hash   -164874010
     */
    MCAPI StructureEditorData();
    /**
     * @symbol ??0StructureEditorData@@QEAA@AEBV0@@Z
     * @hash   1392741761
     */
    MCAPI StructureEditorData(class StructureEditorData const &);
    /**
     * @symbol ?getAnimationModeAsString@StructureEditorData@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -54864726
     */
    MCAPI std::string getAnimationModeAsString() const;
    /**
     * @symbol ?getAnimationSeconds@StructureEditorData@@QEBAMXZ
     * @hash   55569112
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @symbol ?getIgnoreBlocks@StructureEditorData@@QEBA_NXZ
     * @hash   -1636684614
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @symbol ?getIgnoreEntities@StructureEditorData@@QEBA_NXZ
     * @hash   130156586
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @symbol ?getIncludePlayers@StructureEditorData@@QEBA_NXZ
     * @hash   -204065958
     */
    MCAPI bool getIncludePlayers() const;
    /**
     * @symbol ?getIntegritySeed@StructureEditorData@@QEBAIXZ
     * @hash   -2002689808
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @symbol ?getIntegrityValue@StructureEditorData@@QEBAMXZ
     * @hash   704341930
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @symbol ?getIsWaterLogged@StructureEditorData@@QEBA_NXZ
     * @hash   -1805340164
     */
    MCAPI bool getIsWaterLogged() const;
    /**
     * @symbol ?getMirror@StructureEditorData@@QEBA?AW4Mirror@@XZ
     * @hash   -1894053708
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @symbol ?getPivot@StructureEditorData@@QEBAAEBVVec3@@XZ
     * @hash   -1854904278
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @symbol ?getRedstoneSaveMode@StructureEditorData@@QEBA?AW4StructureRedstoneSaveMode@@XZ
     * @hash   1129151232
     */
    MCAPI enum class StructureRedstoneSaveMode getRedstoneSaveMode() const;
    /**
     * @symbol ?getRotation@StructureEditorData@@QEBA?AW4Rotation@@XZ
     * @hash   709390294
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @symbol ?getShowBoundingBox@StructureEditorData@@QEBA_NXZ
     * @hash   -1983105668
     */
    MCAPI bool getShowBoundingBox() const;
    /**
     * @symbol ?getStructureBlockType@StructureEditorData@@QEBA?AW4StructureBlockType@@XZ
     * @hash   2120501642
     */
    MCAPI enum class StructureBlockType getStructureBlockType() const;
    /**
     * @symbol ?getStructureName@StructureEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   955707404
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @symbol ?getStructureOffset@StructureEditorData@@QEBAAEBVBlockPos@@XZ
     * @hash   371662826
     */
    MCAPI class BlockPos const & getStructureOffset() const;
    /**
     * @symbol ?getStructureSettings@StructureEditorData@@QEBAAEBVStructureSettings@@XZ
     * @hash   -1861516700
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @symbol ?getStructureSize@StructureEditorData@@QEBAAEBVBlockPos@@XZ
     * @hash   -770258822
     */
    MCAPI class BlockPos const & getStructureSize() const;
    /**
     * @symbol ?load@StructureEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1292554359
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?save@StructureEditorData@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1187490258
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureEditorData@@QEAAX_N@Z
     * @hash   885139856
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @symbol ?setAnimationMode@StructureEditorData@@QEAAXW4AnimationMode@@@Z
     * @hash   -509789024
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @symbol ?setAnimationSeconds@StructureEditorData@@QEAAXM@Z
     * @hash   -58294182
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @symbol ?setAnimationTicks@StructureEditorData@@QEAAXI@Z
     * @hash   -340738472
     */
    MCAPI void setAnimationTicks(unsigned int);
    /**
     * @symbol ?setIgnoreBlocks@StructureEditorData@@QEAAX_N@Z
     * @hash   312250770
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @symbol ?setIgnoreEntities@StructureEditorData@@QEAAX_N@Z
     * @hash   -1096205758
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @symbol ?setIntegritySeed@StructureEditorData@@QEAAXI@Z
     * @hash   1519670938
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @symbol ?setIntegrityValue@StructureEditorData@@QEAAXM@Z
     * @hash   -1964209064
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @symbol ?setIsWaterLogged@StructureEditorData@@QEAAX_N@Z
     * @hash   -902181360
     */
    MCAPI void setIsWaterLogged(bool);
    /**
     * @symbol ?setLastTouchedByPlayerID@StructureEditorData@@QEAAXUActorUniqueID@@@Z
     * @hash   -345206844
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @symbol ?setMirror@StructureEditorData@@QEAAXW4Mirror@@@Z
     * @hash   -14719234
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol ?setRotation@StructureEditorData@@QEAAXW4Rotation@@@Z
     * @hash   -1247478864
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setShowBoundingBox@StructureEditorData@@QEAAX_N@Z
     * @hash   51826544
     */
    MCAPI void setShowBoundingBox(bool);
    /**
     * @symbol ?setStructureBlockType@StructureEditorData@@QEAAXW4StructureBlockType@@@Z
     * @hash   -1677079628
     */
    MCAPI void setStructureBlockType(enum class StructureBlockType);
    /**
     * @symbol ?setStructureName@StructureEditorData@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -589414216
     */
    MCAPI void setStructureName(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?setStructureOffset@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
     * @hash   1400121742
     */
    MCAPI void setStructureOffset(class BlockPos const &);
    /**
     * @symbol ?setStructureSize@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
     * @hash   -2020923106
     */
    MCAPI void setStructureSize(class BlockPos const &);
    /**
     * @symbol ??1StructureEditorData@@QEAA@XZ
     * @hash   1095713494
     */
    MCAPI ~StructureEditorData();
    /**
     * @symbol ?DEFAULT_EXPORT_NAME@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1752075297
     */
    MCAPI static std::string const DEFAULT_EXPORT_NAME;
    /**
     * @symbol ?DEFAULT_STRUCTURE_NAMESPACE@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1515762719
     */
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    /**
     * @symbol ?MAX_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
     * @hash   -1261427563
     */
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    /**
     * @symbol ?MIN_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
     * @hash   179511337
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    /**
     * @symbol ?MIN_STRUCTURE_SIZE@StructureEditorData@@2VBlockPos@@B
     * @hash   -314588059
     */
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;
    /**
     * @symbol ?NAMESPACE_DELIMITER@StructureEditorData@@2DB
     * @hash   -2128403016
     */
    MCAPI static char const NAMESPACE_DELIMITER;
    /**
     * @symbol ?getOrientedBounds@StructureEditorData@@SA?AVBlockPos@@AEBV2@W4Rotation@@@Z
     * @hash   -525830765
     */
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const &, enum class Rotation);

//private:
    /**
     * @symbol ?_setPivotFromStructureSize@StructureEditorData@@AEAAXXZ
     * @hash   -1601580659
     */
    MCAPI void _setPivotFromStructureSize();

private:
    /**
     * @symbol ?DEFAULT_STRUCTURE_TYPE@StructureEditorData@@0W4StructureBlockType@@B
     * @hash   1762156943
     */
    MCAPI static enum class StructureBlockType const DEFAULT_STRUCTURE_TYPE;

};