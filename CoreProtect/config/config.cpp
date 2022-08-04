#include "../pch.h"
#include "config.h"

Config::Config()
	: ENABLE_AWE(initBoolean("enable-awe", false)),
	DISABLE_WAL(initBoolean("disable-wal", false)),
	HOVER_EVENTS(initBoolean("hover-events", true)),
	DATABASE_LOCK(initBoolean("database-lock", true)),
	LOG_CANCELLED_CHAT(initBoolean("log-cancelled-chat", true)),
	HOPPER_FILTER_META(initBoolean("hopper-filter-meta", false)),
	EXCLUDE_TNT(initBoolean("exclude-tnt", false)),
	NETWORK_DEBUG(initBoolean("network-debug", false)),
	DONATION_KEY(initString("donation-key", "", "# CoreProtect is donationware. For more information, visit our project page.")),
	USE_MYSQL(initBoolean("use-mysql", false, "# MySQL is optional and not required.\n# If you prefer to use MySQL, enable the following and fill out the fields.")),
	TABLE_PREFIX(initString("table-prefix", "co_")),
	MYSQL_HOST(initString("mysql-host", "127.0.0.1")),
	MYSQL_PORT(initInt("mysql-port", 3306)),
	MYSQL_DATABASE(initString("mysql-database", "database")),
	MYSQL_USERNAME(initString("mysql-username", "root")),
	MYSQL_PASSWORD(initString("mysql-password", "")),
	LANGUAGE(initString("language", "en", "# If modified, will automatically attempt to translate languages phrases.\n# List of language codes: https://coreprotect.net/languages/")),
	CHECK_UPDATES(initBoolean("check-updates", true, "# If enabled, CoreProtect will check for updates when your server starts up.\n# If an update is available, you'll be notified via your server console.")),
	API_ENABLED(initBoolean("api-enabled", true, "# If enabled, other plugins will be able to utilize the CoreProtect API.")),
	VERBOSE(initBoolean("verbose", true, "# If enabled, extra data is displayed during rollbacks and restores.\n# Can be manually triggered by adding \"#verbose\" to your rollback command.")),
	DEFAULT_RADIUS(initInt("default-radius", 10, "# If no radius is specified in a rollback or restore, this value will be\n# used as the radius. Set to \"0\" to disable automatically adding a radius.")),
	MAX_RADIUS(initInt("max-radius", 100, "# The maximum radius that can be used in a command. Set to \"0\" to disable.\n# To run a rollback or restore without a radius, you can use \"r:#global\".")),
	ROLLBACK_ITEMS(initBoolean("rollback-items", true, "# If enabled, items taken from containers (etc) will be included in rollbacks.")),
	ROLLBACK_ENTITIES(initBoolean("rollback-entities", true, "# If enabled, entities, such as killed animals, will be included in rollbacks.")),
	SKIP_GENERIC_DATA(initBoolean("skip-generic-data", true, "# If enabled, generic data, like zombies burning in daylight, won't be logged.")),
	BLOCK_PLACE(initBoolean("block-place", true, "# Logs blocks placed by players.")),
	BLOCK_BREAK(initBoolean("block-break", true, "# Logs blocks broken by players.")),
	NATURAL_BREAK(initBoolean("natural-break", true, "# Logs blocks that break off of other blocks), for example, a sign or torch\n# falling off of a dirt block that a player breaks. This is required for\n# beds/doors to properly rollback.")),
	BLOCK_MOVEMENT(initBoolean("block-movement", true, "# Properly track block movement, such as sand or gravel falling.")),
	PISTONS(initBoolean("pistons", true, "# Properly track blocks moved by pistons.")),
	BLOCK_BURN(initBoolean("block-burn", true, "# Logs blocks that burn up in a fire.")),
	BLOCK_IGNITE(initBoolean("block-ignite", true, "# Logs when a block naturally ignites, such as from fire spreading.")),
	EXPLOSIONS(initBoolean("explosions", true, "# Logs explosions, such as TNT and Creepers.")),
	ENTITY_CHANGE(initBoolean("entity-change", true, "# Track when an entity changes a block, such as an Enderman destroying blocks.")),
	ENTITY_KILLS(initBoolean("entity-kills", true, "# Logs killed entities, such as killed cows and enderman.")),
	SIGN_TEXT(initBoolean("sign-text", true, "# Logs text on signs. If disabled, signs will be blank when rolled back.")),
	BUCKETS(initBoolean("buckets", true, "# Logs lava and water sources placed/removed by players who are using buckets.")),
	LEAF_DECAY(initBoolean("leaf-decay", true, "# Logs natural tree leaf decay.")),
	TREE_GROWTH(initBoolean("tree-growth", true, "# Logs tree growth. Trees are linked to the player who planted the sappling.")),
	MUSHROOM_GROWTH(initBoolean("mushroom-growth", true, "# Logs mushroom growth.")),
	VINE_GROWTH(initBoolean("vine-growth", true, "# Logs natural vine growth.")),
	PORTALS(initBoolean("portals", true, "# Logs when portals such as Nether portals generate naturally.")),
	WATER_FLOW(initBoolean("water-flow", true, "# Logs water flow. If water destroys other blocks, such as torches,\n# this allows it to be properly rolled back.")),
	LAVA_FLOW(initBoolean("lava-flow", true, "# Logs lava flow. If lava destroys other blocks, such as torches,\n# this allows it to be properly rolled back.")),
	LIQUID_TRACKING(initBoolean("liquid-tracking", true, "# Allows liquid to be properly tracked and linked to players.\n# For example, if a player places water which flows and destroys torches,\n# it can all be properly restored by rolling back that single player.")),
	ITEM_TRANSACTIONS(initBoolean("item-transactions", true, "# Track item transactions, such as when a player takes items from\n# a chest, furnace, or dispenser.")),
	ITEM_DROPS(initBoolean("item-drops", true, "# Logs items dropped by players.")),
	ITEM_PICKUPS(initBoolean("item-pickups", true, "# Logs items picked up by players.")),
	HOPPER_TRANSACTIONS(initBoolean("hopper-transactions", true, "# Track all hopper transactions, such as when a hopper removes items from a\n# chest, furnace, or dispenser.")),
	PLAYER_INTERACTIONS(initBoolean("player-consteractions", true, "# Track player interactions, such as when a player opens a door, presses\n# a button, or opens a chest. Player interactions can't be rolled back.")),
	PLAYER_MESSAGES(initBoolean("player-messages", true, "# Logs messages that players send in the chat.")),
	PLAYER_COMMANDS(initBoolean("player-commands", true, "# Logs all commands used by players.")),
	PLAYER_SESSIONS(initBoolean("player-sessions", true, "# Logs the logins and logouts of players.")),
	USERNAME_CHANGES(initBoolean("username-changes", true, "# Logs when a player changes their Minecraft username.")),
	WORLDEDIT(initBoolean("worldedit", true, "# Logs changes made via the plugin \"WorldEdit\" if it's in use on your server."))
{}

bool Config::initBoolean(const std::string key, const bool defaultValue, const std::string header)
{
	if (!loaded) initConfig();
	try { return config[key].as<bool>(); }
	catch (YAML::Exception)
	{
		if (key == "enable-awe" || key == "disable-wal" || key == "hover-events" || key == "database-lock" || key == "log-cancelled-chat" || key == "hopper-filter-meta" || key == "exclude-tnt" || key == "network-debug") return defaultValue;
		logger.info << "initBoolean catch: " << key << logger.endl;
		std::ifstream fin("./plugins/CoreProtect/config.yml");
		std::ofstream fout("./plugins/CoreProtect/config.yml", std::ios::app);

		fin.seekg(0, std::ios::end);
		if (fin.tellg() == 0) fout << "# CoreProtect Config";

		if (header == "") fout << "\n" << key << ": " << (defaultValue ? "true" : "false");
		else fout << "\n\n" << header << "\n" << key << ": " << (defaultValue ? "true" : "false");

		fout.close();
		fin.close();
		return defaultValue;
	}
}

int Config::initInt(const std::string key, const int defaultValue, const std::string header)
{
	if (!loaded) initConfig();
	try { return config[key].as<int>(); }
	catch (YAML::Exception)
	{
		logger.info << "initInt catch" << logger.endl;
		std::ifstream fin("./plugins/CoreProtect/config.yml");
		std::ofstream fout("./plugins/CoreProtect/config.yml", std::ios::app);

		fin.seekg(0, std::ios::end);
		if (fin.tellg() == 0) fout << "# CoreProtect Config";

		if (header == "") fout << "\n" << key << ": " << defaultValue;
		else fout << "\n\n" << header << "\n" << key << ": " << defaultValue;

		fout.close();
		fin.close();
		return defaultValue;
	}
}

std::string Config::initString(const std::string key, const std::string defaultValue, const std::string header)
{
	if (!loaded) initConfig();
	try
	{
		std::string configured = config[key].as<std::string>();
		if (configured == "null") return defaultValue;
		else return configured;
	}
	catch (YAML::Exception)
	{
		logger.info << "initString catch" << logger.endl;
		std::ifstream fin("./plugins/CoreProtect/config.yml");
		std::ofstream fout("./plugins/CoreProtect/config.yml", std::ios::app);

		fin.seekg(0, std::ios::end);
		if (fin.tellg() == 0) fout << "# CoreProtect Config";

		if (header == "") fout << "\n" << key << ": " << defaultValue;
		else fout << "\n\n" << header << "\n" << key << ": " << defaultValue;

		fout.close();
		fin.close();
		return defaultValue;
	}
}

void Config::initConfig()
{
	std::ofstream openCreate("./plugins/CoreProtect/config.yml", std::ios::app);
	openCreate.close();
	config = YAML::LoadFile("./plugins/CoreProtect/config.yml");
	loaded = true;
}
