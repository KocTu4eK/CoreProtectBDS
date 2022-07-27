#include "../pch.h"
#include "database.h"

SQLite::Statement& Database::execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback)
{
	if (true) // !config.USE_MYSQL
	{
		if (callback != NULL)
		{
			SQLite::Statement stmt(db, query);
			if (callback == nullptr) return stmt; // execute("query", nullptr)
			else callback(stmt); // execute("query", [](SQLite::Statement&] {})
		}
		else db.exec(query); // execute("query");
	}
	else {}
}

void Database::createTables(std::string tablePrefix)
{
	if (true) // !config.USE_MYSQL
	{
		try
		{
			if (true) db.exec("PRAGMA journal_mode=WAL"); // !config.DISABLE_WAL
			db.exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "art_map (id INT, art TEXT)");
			db.exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "user(id INT PRIMARY KEY ASC, time INT, user TEXT, i INT)");
			db.exec("CREATE TABLE IF NOT EXISTS " + tablePrefix + "block (time INT, user INT, wid INT, x INT, y INT, z INT, type INT, data INT, meta BLOB, blockdata BLOB, action INT, rolled_back INT)");
		}
		catch (SQLite::Exception ex) { logger.error << ex.what() << logger.endl; }
	}
	else {}
}
