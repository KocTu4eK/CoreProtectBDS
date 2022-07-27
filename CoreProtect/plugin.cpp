#include "pch.h"
#include "resource.h"
#include "database/database.h"

Logger logger("CoreProtect");
// Config config;
Database database;

void pluginInit()
{
	database.createTables("co_"); // config.TABLE_PREFIX
}
