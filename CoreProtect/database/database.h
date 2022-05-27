#include "../pch.h"
#include "../config/config.h"
#define DB_PATH "./plugins/CoreProtect/database.db"

extern Config config;
extern Logger logger;

class Database
{
	SQLite::Database db = SQLite::Database(DB_PATH, SQLite::OPEN_READWRITE + SQLite::OPEN_CREATE);

public:
	void execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback = NULL);

private:
	void createTables();
};