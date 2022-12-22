/**
 * @file  SetTitlePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetTitlePacket.
 *
 */
class SetTitlePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class TitleType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTITLEPACKET
public:
    class SetTitlePacket& operator=(class SetTitlePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1225487112
     */
    virtual ~SetTitlePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SetTitlePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   669211312
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SetTitlePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   382331229
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SetTitlePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1296868810
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SetTitlePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2124862218
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SetTitlePacket@@QEAA@AEBV0@@Z
     * @hash   2052025473
     */
    MCAPI SetTitlePacket(class SetTitlePacket const &);
    /**
     * @symbol ??0SetTitlePacket@@QEAA@XZ
     * @hash   395398282
     */
    MCAPI SetTitlePacket();
    /**
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBVResolvedTextObject@@@Z
     * @hash   1709701914
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, class ResolvedTextObject const &);
    /**
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   705662400
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType, std::string const &);
    /**
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@@Z
     * @hash   858229337
     */
    MCAPI SetTitlePacket(enum class SetTitlePacket::TitleType);
    /**
     * @symbol ??0SetTitlePacket@@QEAA@HHH@Z
     * @hash   332285201
     */
    MCAPI SetTitlePacket(int, int, int);
    /**
     * @symbol ??4SetTitlePacket@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -475925224
     */
    MCAPI class SetTitlePacket & operator=(class SetTitlePacket &&);

};