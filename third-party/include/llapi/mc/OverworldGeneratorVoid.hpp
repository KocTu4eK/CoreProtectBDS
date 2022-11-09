/**
 * @file  OverworldGeneratorVoid.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldGeneratorVoid.
 *
 */
class OverworldGeneratorVoid {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATORVOID
public:
    class OverworldGeneratorVoid& operator=(class OverworldGeneratorVoid const &) = delete;
    OverworldGeneratorVoid(class OverworldGeneratorVoid const &) = delete;
    OverworldGeneratorVoid() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORVOID
    /**
     * @symbol ?_prepareHeights@OverworldGeneratorVoid@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
     * @hash   -18159491
     */
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    /**
     * @symbol ?decorateWorldGenPostProcess@OverworldGeneratorVoid@@EEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     * @hash   139878703
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @symbol ?findSpawnPosition@OverworldGeneratorVoid@@UEBA?AVBlockPos@@XZ
     * @hash   1600672714
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol ?generateDensityCellsForChunk@OverworldGeneratorVoid@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
     * @hash   1825847878
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @symbol ?getBiomeSource@OverworldGeneratorVoid@@UEBAAEBVBiomeSource@@XZ
     * @hash   412038134
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @symbol ?getLevelGenHeight@OverworldGeneratorVoid@@UEBAHXZ
     * @hash   -1109612149
     */
    MCVAPI int getLevelGenHeight() const;
    /**
     * @symbol ?getMaterialAdjNoise@OverworldGeneratorVoid@@UEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
     * @hash   -1709322098
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    /**
     * @symbol ?getSurfaceNoise@OverworldGeneratorVoid@@UEAAAEBVPerlinSimplexNoise@@XZ
     * @hash   1321118192
     */
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    /**
     * @symbol ?getXoroshiroPositionalRandomFactory@OverworldGeneratorVoid@@UEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
     * @hash   -1278145093
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
    /**
     * @symbol ?loadChunk@OverworldGeneratorVoid@@UEAAXAEAVLevelChunk@@_N@Z
     * @hash   2036527670
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
#endif
    /**
     * @symbol ??0OverworldGeneratorVoid@@QEAA@AEAVDimension@@I@Z
     * @hash   -524091563
     */
    MCAPI OverworldGeneratorVoid(class Dimension &, unsigned int);

};