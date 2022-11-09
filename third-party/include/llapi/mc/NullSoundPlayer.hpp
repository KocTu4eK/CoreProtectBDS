/**
 * @file  NullSoundPlayer.hpp
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
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -868666217
     */
    virtual ~NullSoundPlayer();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1404633630
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1402786588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   -1400016025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @hash   -1349120504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1348196983
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -332096605
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -381145084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -767597354
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -766673833
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   474479381
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
     * @hash   -776100367
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @symbol ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
     * @hash   42078718
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @symbol ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
     * @hash   -876553608
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @symbol ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
     * @hash   2071618951
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @symbol ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
     * @hash   329838978
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @symbol ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
     * @hash   30394563
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @symbol ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1068744322
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @symbol ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
     * @hash   1681870920
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @symbol ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     * @hash   1611567170
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
     * @hash   134815306
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
     * @hash   -96608109
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     * @hash   766394053
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @symbol ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
     * @hash   1366053244
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @symbol ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
     * @hash   645803302
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @symbol ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1314581396
     */
    MCVAPI void stop(std::string const &);
    /**
     * @symbol ?stop@NullSoundPlayer@@UEAAX_K@Z
     * @hash   556281268
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @symbol ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
     * @hash   23402607
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @symbol ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
     * @hash   -1344262495
     */
    MCVAPI void stopAllSounds();
    /**
     * @symbol ?stopMusic@NullSoundPlayer@@UEAAXXZ
     * @hash   -887210623
     */
    MCVAPI void stopMusic();
    /**
     * @symbol ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
     * @hash   1888727421
     */
    MCVAPI class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
    /**
     * @symbol ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
     * @hash   1417309277
     */
    MCVAPI class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @symbol ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
     * @hash   -2147480650
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};