/**
 * @file  LevelChunkMetaData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkMetaData.
 *
 */
class LevelChunkMetaData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATA
public:
    class LevelChunkMetaData& operator=(class LevelChunkMetaData const &) = delete;
    LevelChunkMetaData() = delete;
#endif

public:
    /**
     * @symbol ??0LevelChunkMetaData@@QEAA@AEBV0@@Z
     * @hash   -1311382143
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const &);
    /**
     * @symbol ??0LevelChunkMetaData@@QEAA@AEAVIDataInput@@@Z
     * @hash   1265488909
     */
    MCAPI LevelChunkMetaData(class IDataInput &);
    /**
     * @symbol ?getCurrentHash@LevelChunkMetaData@@QEBA_KXZ
     * @hash   1358390315
     */
    MCAPI unsigned __int64 getCurrentHash() const;
    /**
     * @symbol ?serialize@LevelChunkMetaData@@QEBAXAEAVIDataOutput@@@Z
     * @hash   349062062
     */
    MCAPI void serialize(class IDataOutput &) const;
    /**
     * @symbol ??1LevelChunkMetaData@@QEAA@XZ
     * @hash   953351906
     */
    MCAPI ~LevelChunkMetaData();
    /**
     * @symbol ?INVALID_META_DATA@LevelChunkMetaData@@2_KB
     * @hash   1360157574
     */
    MCAPI static unsigned __int64 const INVALID_META_DATA;

//protected:
    /**
     * @symbol ?_recomputeHash@LevelChunkMetaData@@IEBAXXZ
     * @hash   -1941953907
     */
    MCAPI void _recomputeHash() const;

protected:

};