#pragma once
#include "../pch.h"
#include "../utility/utility.h"

extern Logger logger;

class Config
{
	YAML::Node config;
	bool loaded = false;

public:
	Config();
	const bool ENABLE_AWE;
	const bool DISABLE_WAL;
	const bool HOVER_EVENTS;
	const bool DATABASE_LOCK;
	const bool LOG_CANCELLED_CHAT;
	const bool HOPPER_FILTER_META;
	const bool EXCLUDE_TNT;
	const bool NETWORK_DEBUG;
	const std::string DONATION_KEY;
	const bool USE_MYSQL;
	const std::string TABLE_PREFIX;
	const std::string MYSQL_HOST;
	const int MYSQL_PORT;
	const std::string MYSQL_DATABASE;
	const std::string MYSQL_USERNAME;
	const std::string MYSQL_PASSWORD;
	const std::string LANGUAGE;
	const bool CHECK_UPDATES;
	const bool API_ENABLED;
	const bool VERBOSE;
	const int DEFAULT_RADIUS;
	const int MAX_RADIUS;
	const bool ROLLBACK_ITEMS;
	const bool ROLLBACK_ENTITIES;
	const bool SKIP_GENERIC_DATA;
	const bool BLOCK_PLACE;
	const bool BLOCK_BREAK;
	const bool NATURAL_BREAK;
	const bool BLOCK_MOVEMENT;
	const bool PISTONS;
	const bool BLOCK_BURN;
	const bool BLOCK_IGNITE;
	const bool EXPLOSIONS;
	const bool ENTITY_CHANGE;
	const bool ENTITY_KILLS;
	const bool SIGN_TEXT;
	const bool BUCKETS;
	const bool LEAF_DECAY;
	const bool TREE_GROWTH;
	const bool MUSHROOM_GROWTH;
	const bool VINE_GROWTH;
	const bool PORTALS;
	const bool WATER_FLOW;
	const bool LAVA_FLOW;
	const bool LIQUID_TRACKING;
	const bool ITEM_TRANSACTIONS;
	const bool ITEM_DROPS;
	const bool ITEM_PICKUPS;
	const bool HOPPER_TRANSACTIONS;
	const bool PLAYER_INTERACTIONS;
	const bool PLAYER_MESSAGES;
	const bool PLAYER_COMMANDS;
	const bool PLAYER_SESSIONS;
	const bool USERNAME_CHANGES;
	const bool WORLDEDIT;

private:
	bool initBoolean(const std::string key, const bool defaultValue, const std::string header = "");
	int initInt(const std::string key, const int defaultValue, const std::string header = "");
	std::string initString(const std::string key, const std::string defaultValue, const std::string header = "");
	void initConfig();
};