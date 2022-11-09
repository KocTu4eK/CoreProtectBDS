/**
 * @file  ParticleCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ParticleCommand.
 *
 */
class ParticleCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLECOMMAND
public:
    class ParticleCommand& operator=(class ParticleCommand const &) = delete;
    ParticleCommand(class ParticleCommand const &) = delete;
    ParticleCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1720388531
     */
    virtual ~ParticleCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@ParticleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1358200306
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@ParticleCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1686657520
     */
    MCAPI static void setup(class CommandRegistry &);

};