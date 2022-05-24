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
	void createTables(DB::Session* session)
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
};