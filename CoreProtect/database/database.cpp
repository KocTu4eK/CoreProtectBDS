#include "../pch.h"
#include "database.h"

void Database::initialize()
{
	if (!config.USE_MYSQL)
	{
		session = DB::Session::create(DB::DBType::SQLite, path);
		createTables(session.get());
	}
	else {}
}

void Database::createTables(DB::Session* session)
{
	try
	{
		session->execute("CREATE TABLE " + config.TABLE_PREFIX + "block(INT test)");
	}
	catch (std::exception ex)
	{
		logger.error << ex.what() << logger.endl;
	}
}