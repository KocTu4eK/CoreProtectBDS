#include "../pch.h"
#include "../config/config.h"

extern Config config;
extern Logger logger;

class Database
{
	DB::SharedPointer<DB::Session> session;
	std::string const path = "./plugins/CoreProtect/database.db";
	
public:
	Database();

private:
	void createTables(DB::Session* session);
};