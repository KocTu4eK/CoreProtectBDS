#include "pch.h"
#include "resource.h"
#include "config/config.h"
#include "database/database.h"

Logger logger("CoreProtect");
Config config;
Database database;

void pluginInit()
{
	database.createTables(config.TABLE_PREFIX);
}
