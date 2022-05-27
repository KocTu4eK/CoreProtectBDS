#include "../pch.h"
#include "database.h"

void Database::execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback = NULL)
{
	if (!config.USE_MYSQL)
	{
		if (callback != NULL)
		{
			SQLite::Statement stmt(db, query);
			callback(stmt);
		}
		else db.exec(query);
	}
}

void Database::createTables()
{

	if (!config.USE_MYSQL)
	{
		try
		{
			if (!config.DISABLE_WAL) db.exec("PRAGMA journal_mode=WAL");
			db.exec("CREATE TABLE IF NOT EXISTS " + config.TABLE_PREFIX + "art_map(id INT, art TEXT)");
			db.exec("CREATE TABLE IF NOT EXISTS " + config.TABLE_PREFIX + "block(time INT, user INT, wid INT, x INT, y INT, z INT, type INT, data INT, meta BLOB, blockdata BLOB, action INT, rolled_back INT)");
			db.exec("CREATE TABLE IF NOT EXISTS " + config.TABLE_PREFIX + "user(id INT PRIMARY KEY ASC, time INT, user TEXT, i INT)");
		}
		catch (SQLite::Exception ex) { logger.error << ex.what() << logger.endl; }
	}
}