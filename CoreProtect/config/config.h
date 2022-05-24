#pragma once
#include "../pch.h"
#define WLINK L"https://raw.githubusercontent.com/KocTu4eK/CoreProtectBDS/main/config/config.yml"
#define PATH "./plugins/CoreProtect/config.yml"
#define WPATH L"./plugins/CoreProtect/config.yml"

class Config
{
	YAML::Node ymlConfig;

public:
	void initialize();

	std::string DONATION_KEY;
	bool USE_MYSQL;
	std::string TABLE_PREFIX;
	std::string MYSQL_HOST;;
	int MYSQL_PORT;
	std::string MYSQL_DATABASE;
	std::string MYSQL_USERNAME;
	std::string MYSQL_PASSWORD;
	std::string LANGUAGE;
	bool CHECK_UPDATES;
	bool API_ENABLED;
	bool VERBOSE;
	int DEFAULT_RADIUS;
	int MAX_RADIUS;
	bool ROLLBACK_ITEMS;
	bool ROLLBACK_ENTITIES;
	bool SKIP_GENERIC_DATA;
	bool BLOCK_PLACE;
	bool BLOCK_BREAK;
	bool NATURAL_BREAK;
	bool BLOCK_MOVEMENT;
	bool PISTONS;
	bool BLOCK_BURN;
	bool BLOCK_IGNITE;
	bool EXPLOSIONS;
	bool ENTITY_CHANGE;
	bool ENTITY_KILLS;
	bool SIGN_TEXT;
	bool BUCKETS;
	bool LEAF_DECAY;
	bool TREE_GROWTH;
	bool MUSHROOM_GROWTH;
	bool VINE_GROWTH;
	bool PORTALS;
	bool WATER_FLOW;
	bool LAVA_FLOW;
	bool LIQUID_TRACKING;
	bool ITEM_TRANSACTIONS;
	bool ITEM_DROPS;
	bool ITEM_PICKUPS;
	bool HOPPER_TRANSACTIONS;
	bool PLAYER_INTERACTIONS;
	bool PLAYER_MESSAGES;
	bool PLAYER_COMMANDS;
	bool PLAYER_SESSIONS;
	bool USERNAME_CHANGES;
	bool WORLDEDIT;

private:
	bool getBoolean(std::string const key, bool const default_value);
	std::string getString(std::string const key, std::string const default_value);
	int getInt(std::string const key, int const default_value);
};