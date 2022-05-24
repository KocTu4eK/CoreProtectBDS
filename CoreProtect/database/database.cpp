#include "../pch.h"
#include "database.h"

Database::Database()
{
	if (!config.USE_MYSQL)
	{
		session = DB::Session::create(DB::DBType::SQLite, path);
		createTables(session.get());
	}
	else {}
}