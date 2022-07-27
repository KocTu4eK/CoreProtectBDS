#pragma once
#include "../pch.h"

extern Logger logger;

class Database
{
	SQLite::Database db = SQLite::Database("./plugins/CoreProtect/database.db", SQLite::OPEN_READWRITE + SQLite::OPEN_CREATE);

public:
	SQLite::Statement& execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback = NULL);
	void createTables(std::string tablePrefix);
};
