#pragma once
#include "../pch.h"
#include "../config/config.h"

extern Logger logger;
extern Config config;

class Database
{
	SQLite::Database* db;

public:
	SQLite::Statement& execute(const std::string query, std::function<void(SQLite::Statement& stmt)> callback = NULL);
	void createTables(std::string tablePrefix);
};
