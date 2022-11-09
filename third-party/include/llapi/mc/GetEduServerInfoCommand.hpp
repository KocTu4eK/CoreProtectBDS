/**
 * @file  GetEduServerInfoCommand.hpp
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
 * @brief MC class GetEduServerInfoCommand.
 *
 */
class GetEduServerInfoCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETEDUSERVERINFOCOMMAND
public:
    class GetEduServerInfoCommand& operator=(class GetEduServerInfoCommand const &) = delete;
    GetEduServerInfoCommand(class GetEduServerInfoCommand const &) = delete;
    GetEduServerInfoCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   285838376
     */
    virtual ~GetEduServerInfoCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@GetEduServerInfoCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   704790729
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@GetEduServerInfoCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -278260240
     */
    MCAPI static void setup(class CommandRegistry &);

};