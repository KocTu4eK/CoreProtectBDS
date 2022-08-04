#include "../pch.h"
#include "database.h"

SQLite::Statement& Database::execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback)
{
	if (!config.USE_MYSQL)
	{
		if (callback != NULL)
		{
			SQLite::Statement stmt(*db, query);
			if (callback == nullptr) return stmt; // execute("query", nullptr)
			else callback(stmt); // execute("query", [](SQLite::Statement&] {})
		}
		else db->exec(query); // execute("query");
	}
	else {}
}

void Database::createTables(std::string tablePrefix)
{
	if (!config.USE_MYSQL)
	{
		SQLite::Database temp("./plugins/CoreProtect/database.db", SQLite::OPEN_READWRITE + SQLite::OPEN_CREATE);
		db = &temp;
		try
		{
			if (!config.DISABLE_WAL) db->exec("PRAGMA journal_mode=WAL");
			db->exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "art_map (id INT, art TEXT)");
			db->exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "user(id INT PRIMARY KEY ASC, time INT, user TEXT, i INT)");
			db->exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "block (time INT, user INT, wid INT, x INT, y INT, z INT, type INT, data INT, meta BLOB, blockdata BLOB, action INT, rolled_back INT)");
		}
		catch (SQLite::Exception ex) { logger.error << ex.what() << logger.endl; }
	}
	else {}
}
