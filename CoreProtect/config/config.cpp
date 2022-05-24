#include "../pch.h"
#include "config.h"

void Config::initialize()
{
	try { ymlConfig = YAML::LoadFile(PATH); }
	catch (YAML::Exception) {
		try
		{
			URLDownloadToFileW(0, WLINK, WPATH, 0, 0);
			ymlConfig = YAML::LoadFile(PATH);
		}
		catch (std::exception) {}
	}

	DONATION_KEY = getString("donation-key", "");
	USE_MYSQL = getBoolean("use-mysql", false);
	TABLE_PREFIX = getString("table-prefix", "co_");
	MYSQL_HOST = getString("mysql-host", "127.0.0.1");
	MYSQL_PORT = getInt("mysql-port", 3306);
	MYSQL_DATABASE = getString("mysql-database", "database");
	MYSQL_USERNAME = getString("mysql-username", "root");
	MYSQL_PASSWORD = getString("mysql-password", "");
	LANGUAGE = getString("language", "en");
	CHECK_UPDATES = getBoolean("check-updates", true);
	API_ENABLED = getBoolean("api-enabled", true);
	VERBOSE = getBoolean("verbose", true);
	DEFAULT_RADIUS = getInt("default-radius", 10);
	MAX_RADIUS = getInt("max-radius", 100);
	ROLLBACK_ITEMS = getBoolean("rollback-items", true);
	ROLLBACK_ENTITIES = getBoolean("rollback-entities", true);
	SKIP_GENERIC_DATA = getBoolean("skip-generic-data", true);
	BLOCK_PLACE = getBoolean("block-place", true);
	BLOCK_BREAK = getBoolean("block-break", true);
	NATURAL_BREAK = getBoolean("natural-break", true);
	BLOCK_MOVEMENT = getBoolean("block-movement", true);
	PISTONS = getBoolean("pistons", true);
	BLOCK_BURN = getBoolean("block-burn", true);
	BLOCK_IGNITE = getBoolean("block-ignite", true);
	EXPLOSIONS = getBoolean("explosions", true);
	ENTITY_CHANGE = getBoolean("entity-change", true);
	ENTITY_KILLS = getBoolean("entity-kills", true);
	SIGN_TEXT = getBoolean("sign-text", true);
	BUCKETS = getBoolean("buckets", true);
	LEAF_DECAY = getBoolean("leaf_decay", true);
	TREE_GROWTH = getBoolean("tree-growth", true);
	MUSHROOM_GROWTH = getBoolean("mushroom-growth", true);
	VINE_GROWTH = getBoolean("vine-growth", true);
	PORTALS = getBoolean("portals", true);
	WATER_FLOW = getBoolean("water_flow", true);
	LAVA_FLOW = getBoolean("lava_flow", true);
	LIQUID_TRACKING = getBoolean("liquid_tracking", true);
	ITEM_TRANSACTIONS = getBoolean("item-transactions", true);
	ITEM_DROPS = getBoolean("item-drops", true);
	ITEM_PICKUPS = getBoolean("item-pickups", true);
	HOPPER_TRANSACTIONS = getBoolean("hopper-transactions", true);
	PLAYER_INTERACTIONS = getBoolean("player-consteractions", true);
	PLAYER_MESSAGES = getBoolean("player-messages", true);
	PLAYER_COMMANDS = getBoolean("player-commands", true);
	PLAYER_SESSIONS = getBoolean("player-sessions", true);
	USERNAME_CHANGES = getBoolean("username-changes", true);
	WORLDEDIT = getBoolean("worldedit", true);
}

bool Config::getBoolean(std::string const key, bool const default_value)
{
	try { return ymlConfig[key].as<bool>(); }
	catch (YAML::Exception) { return default_value; }
}

std::string Config::getString(std::string const key, std::string const default_value)
{
	try
	{
		std::string configured = ymlConfig[key].as<std::string>();
		if (configured == "null") return default_value;
		else return configured;
	}
	catch (YAML::Exception) { return default_value; }
}

int Config::getInt(std::string const key, int const default_value)
{
	try { return ymlConfig[key].as<int>(); }
	catch (YAML::Exception) { return default_value; }
}