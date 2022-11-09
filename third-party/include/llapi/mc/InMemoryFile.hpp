/**
 * @file  InMemoryFile.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InMemoryFile.
 *
 */
class InMemoryFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYFILE
public:
    class InMemoryFile& operator=(class InMemoryFile const &) = delete;
    InMemoryFile(class InMemoryFile const &) = delete;
    InMemoryFile() = delete;
#endif

public:
    /**
     * @symbol ??0InMemoryFile@@QEAA@AEBVPath@Core@@@Z
     * @hash   -1692827847
     */
    MCAPI InMemoryFile(class Core::Path const &);
    /**
     * @symbol ?append@InMemoryFile@@QEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
     * @hash   -1724484038
     */
    MCAPI class leveldb::Status append(class leveldb::Slice const &);
    /**
     * @symbol ?close@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
     * @hash   820130747
     */
    MCAPI class leveldb::Status close(enum class InMemoryAccessMode);
    /**
     * @symbol ?flushToDisk@InMemoryFile@@QEAA?AVStatus@leveldb@@PEAVEnv@3@@Z
     * @hash   -1795428815
     */
    MCAPI class leveldb::Status flushToDisk(class leveldb::Env *);
    /**
     * @symbol ?getFilename@InMemoryFile@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   2078404789
     */
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    /**
     * @symbol ?isMarkedDirty@InMemoryFile@@QEBA_NXZ
     * @hash   1044729988
     */
    MCAPI bool isMarkedDirty() const;
    /**
     * @symbol ?isSafeToDelete@InMemoryFile@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2111614991
     */
    MCAPI bool isSafeToDelete(std::string &) const;
    /**
     * @symbol ?markForDelete@InMemoryFile@@QEAAXXZ
     * @hash   339706211
     */
    MCAPI void markForDelete();
    /**
     * @symbol ?open@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
     * @hash   -741106295
     */
    MCAPI class leveldb::Status open(enum class InMemoryAccessMode);
    /**
     * @symbol ?read@InMemoryFile@@QEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEADAEA_K@Z
     * @hash   -976278878
     */
    MCAPI class leveldb::Status read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *, unsigned __int64 &) const;
    /**
     * @symbol ?rename@InMemoryFile@@QEAAXAEBVPath@Core@@@Z
     * @hash   -1388094862
     */
    MCAPI void rename(class Core::Path const &);
    /**
     * @symbol ??1InMemoryFile@@QEAA@XZ
     * @hash   602475852
     */
    MCAPI ~InMemoryFile();

};