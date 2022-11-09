#include "language/language.h"

void Language::loadPhrases()
{
	phrases.insert({ Phrases::ACTION_NOT_SUPPORTED, "That action is not supported by the command." });
	phrases.insert({ Phrases::AMOUNT_BLOCK, "{0} {block|blocks}" });
	phrases.insert({ Phrases::AMOUNT_CHUNK, "{0} {chunk|chunks}" });
	phrases.insert({ Phrases::AMOUNT_ENTITY, "{0} {entity|entities}" });
	phrases.insert({ Phrases::AMOUNT_ITEM, "{0} {item|items}" });
	phrases.insert({ Phrases::API_TEST, "API test successful." });
	phrases.insert({ Phrases::CACHE_ERROR, "WARNING: Error while validating {0} cache." });
	phrases.insert({ Phrases::CACHE_RELOAD, "Forcing reload of {mapping|world} caches from database." });
	phrases.insert({ Phrases::CHECK_CONFIG, "Please check config.yml" });
	phrases.insert({ Phrases::COMMAND_CONSOLE, "Please run the command from the console." });
	phrases.insert({ Phrases::COMMAND_NOT_FOUND, "Command \"{0}\" not found." });
	phrases.insert({ Phrases::COMMAND_THROTTLED, "Please wait a moment and try again." });
	phrases.insert({ Phrases::CONSUMER_ERROR, "Consumer queue processing already {paused|resumed}." });
	phrases.insert({ Phrases::CONSUMER_TOGGLED, "Consumer queue processing has been {paused|resumed}." });
	phrases.insert({ Phrases::CONTAINER_HEADER, "Container Transactions" });
	phrases.insert({ Phrases::DATABASE_BUSY, "Database busy. Please try again later." });
	phrases.insert({ Phrases::DATABASE_INDEX_ERROR, "Unable to validate database indexes." });
	phrases.insert({ Phrases::DATABASE_LOCKED_1, "Database locked. Waiting up to 15 seconds..." });
	phrases.insert({ Phrases::DATABASE_LOCKED_2, "Database is already in use. Please try again." });
	phrases.insert({ Phrases::DATABASE_LOCKED_3, "To disable database locking, set \"database-lock: false\"." });
	phrases.insert({ Phrases::DATABASE_LOCKED_4, "Disabling database locking can result in data corruption." });
	phrases.insert({ Phrases::DATABASE_UNREACHABLE, "Database is unreachable. Discarding data and shutting down." });
	phrases.insert({ Phrases::DEVELOPMENT_BRANCH, "Development branch detected, skipping patch scripts." });
	phrases.insert({ Phrases::DIRT_BLOCK, "Placed a dirt block under you." });
	phrases.insert({ Phrases::DISABLE_SUCCESS, "Success! Disabled {0}" });
	phrases.insert({ Phrases::ENABLE_FAILED, "{0} was unable to start." });
	phrases.insert({ Phrases::ENABLE_SUCCESS, "{0} has been successfully enabled!" });
	phrases.insert({ Phrases::ENJOY_COREPROTECT, "Enjoy {0}? Join our Discord!" });
	phrases.insert({ Phrases::FINISHING_CONVERSION, "Finishing up data conversion. Please wait..." });
	phrases.insert({ Phrases::FINISHING_LOGGING, "Finishing up data logging. Please wait..." });
	phrases.insert({ Phrases::FIRST_VERSION, "Initial DB: {0}" });
	phrases.insert({ Phrases::GLOBAL_LOOKUP, "Don't specify a radius to do a global lookup." });
	phrases.insert({ Phrases::GLOBAL_ROLLBACK, "Use \"{0}\" to do a global {rollback|restore}" });
	phrases.insert({ Phrases::HELP_ACTION_1, "Restrict the lookup to a certain action." });
	phrases.insert({ Phrases::HELP_ACTION_2, "Examples: [a:block], [a:+block], [a:-block] [a:click], [a:container], [a:inventory], [a:item], [a:kill], [a:chat], [a:command], [a:sign], [a:session], [a:username]" });
	phrases.insert({ Phrases::HELP_COMMAND, "Display more info for that command." });
	phrases.insert({ Phrases::HELP_EXCLUDE_1, "Exclude blocks/users." });
	phrases.insert({ Phrases::HELP_EXCLUDE_2, "Examples: [e:stone], [e:Notch], [e:stone,Notch]" });
	phrases.insert({ Phrases::HELP_HEADER, "{0} Help" });
	phrases.insert({ Phrases::HELP_INCLUDE_1, "Include specific blocks/entities." });
	phrases.insert({ Phrases::HELP_INCLUDE_2, "Examples: [i:stone], [i:zombie], [i:stone,wood,bedrock]" });
	phrases.insert({ Phrases::HELP_INSPECT_1, "With the inspector enabled, you can do the following:" });
	phrases.insert({ Phrases::HELP_INSPECT_2, "Left-click a block to see who placed that block." });
	phrases.insert({ Phrases::HELP_INSPECT_3, "Right-click a block to see what adjacent block was broken." });
	phrases.insert({ Phrases::HELP_INSPECT_4, "Place a block to see what block was broken at that location." });
	phrases.insert({ Phrases::HELP_INSPECT_5, "Place a block in liquid (etc) to see who placed it." });
	phrases.insert({ Phrases::HELP_INSPECT_6, "Right-click on a door, chest, etc, to see who last used it." });
	phrases.insert({ Phrases::HELP_INSPECT_7, "Tip: You can use just \"/co i\" for quicker access." });
	phrases.insert({ Phrases::HELP_INSPECT_COMMAND, "Turns the block inspector on or off." });
	phrases.insert({ Phrases::HELP_LIST, "Displays a list of all commands." });
	phrases.insert({ Phrases::HELP_LOOKUP_1, "Command shortcut." });
	phrases.insert({ Phrases::HELP_LOOKUP_2, "Use after inspecting a block to view logs." });
	phrases.insert({ Phrases::HELP_LOOKUP_COMMAND, "Advanced block data lookup." });
	phrases.insert({ Phrases::HELP_NO_INFO, "Information for command \"{0}\" not found." });
	phrases.insert({ Phrases::HELP_PARAMETER, "Please see \"{0}\" for detailed parameter info." });
	phrases.insert({ Phrases::HELP_PARAMS_1, "Perform the {lookup|rollback|restore}." });
	phrases.insert({ Phrases::HELP_PARAMS_2, "Specify the user(s) to {lookup|rollback|restore}." });
	phrases.insert({ Phrases::HELP_PARAMS_3, "Specify the amount of time to {lookup|rollback|restore}." });
	phrases.insert({ Phrases::HELP_PARAMS_4, "Specify a radius area to limit the {lookup|rollback|restore} to." });
	phrases.insert({ Phrases::HELP_PARAMS_5, "Restrict the {lookup|rollback|restore} to a certain action." });
	phrases.insert({ Phrases::HELP_PARAMS_6, "Include specific blocks/entities in the {lookup|rollback|restore}." });
	phrases.insert({ Phrases::HELP_PARAMS_7, "Exclude blocks/users from the {lookup|rollback|restore}." });
	phrases.insert({ Phrases::HELP_PURGE_1, "Delete data older than specified time." });
	phrases.insert({ Phrases::HELP_PURGE_2, "For example, \"{0}\" will delete all data older than one month, and only keep the last 30 days of data." });
	phrases.insert({ Phrases::HELP_PURGE_COMMAND, "Delete old block data." });
	phrases.insert({ Phrases::HELP_RADIUS_1, "Specify a radius area." });
	phrases.insert({ Phrases::HELP_RADIUS_2, "Examples: [r:10] (Only make changes within 10 blocks of you)" });
	phrases.insert({ Phrases::HELP_RELOAD_COMMAND, "Reloads the configuration file." });
	phrases.insert({ Phrases::HELP_RESTORE_COMMAND, "Restore block data." });
	phrases.insert({ Phrases::HELP_ROLLBACK_COMMAND, "Rollback block data." });
	phrases.insert({ Phrases::HELP_STATUS, "View the plugin status and version information." });
	phrases.insert({ Phrases::HELP_STATUS_COMMAND, "Displays the plugin status." });
	phrases.insert({ Phrases::HELP_TELEPORT, "Teleport to a location." });
	phrases.insert({ Phrases::HELP_TIME_1, "Specify the amount of time to lookup." });
	phrases.insert({ Phrases::HELP_TIME_2, "Examples: [t:2w,5d,7h,2m,10s], [t:5d2h], [t:2.50h]" });
	phrases.insert({ Phrases::HELP_USER_1, "Specify the user(s) to lookup." });
	phrases.insert({ Phrases::HELP_USER_2, "Examples: [u:Notch], [u:Notch,#enderman]" });
	phrases.insert({ Phrases::INCOMPATIBLE_ACTION, "\"{0}\" can't be used with that action." });
	phrases.insert({ Phrases::INSPECTOR_ERROR, "Inspector already {enabled|disabled}." });
	phrases.insert({ Phrases::INSPECTOR_TOGGLED, "Inspector now {enabled|disabled}." });
	phrases.insert({ Phrases::INTEGRATION_ERROR, "Unable to {initialize|disable} {0} logging." });
	phrases.insert({ Phrases::INTEGRATION_SUCCESS, "{0} logging successfully {initialized|disabled}." });
	phrases.insert({ Phrases::INTEGRATION_VERSION, "Invalid {0} version found." });
	phrases.insert({ Phrases::INTERACTIONS_HEADER, "Player Interactions" });
	phrases.insert({ Phrases::INVALID_ACTION, "That is not a valid action." });
	phrases.insert({ Phrases::INVALID_BRANCH_1, "Invalid plugin version (branch has not been set)." });
	phrases.insert({ Phrases::INVALID_BRANCH_2, "To continue, set project branch to \"development\"." });
	phrases.insert({ Phrases::INVALID_BRANCH_3, "Running development code may result in data corruption." });
	phrases.insert({ Phrases::INVALID_CONTAINER, "Please inspect a valid container first." });
	phrases.insert({ Phrases::INVALID_DONATION_KEY, "Invalid donation key." });
	phrases.insert({ Phrases::INVALID_INCLUDE, "\"{0}\" is an invalid block/entity name." });
	phrases.insert({ Phrases::INVALID_INCLUDE_COMBO, "That is an invalid block/entity combination." });
	phrases.insert({ Phrases::INVALID_RADIUS, "Please enter a valid radius." });
	phrases.insert({ Phrases::INVALID_SELECTION, "{0} selection not found." });
	phrases.insert({ Phrases::INVALID_USERNAME, "\"{0}\" is an invalid username." });
	phrases.insert({ Phrases::INVALID_WORLD, "Please specify a valid world." });
	phrases.insert({ Phrases::LATEST_VERSION, "Latest Version: {0}" });
	phrases.insert({ Phrases::LINK_DISCORD, "Discord: {0}" });
	phrases.insert({ Phrases::LINK_DOWNLOAD, "Download: {0}" });
	phrases.insert({ Phrases::LINK_PATREON, "Patreon: {0}" });
	phrases.insert({ Phrases::LINK_WIKI_BLOCK, "Block Names: {0}" });
	phrases.insert({ Phrases::LINK_WIKI_ENTITY, "Entity Names: {0}" });
	phrases.insert({ Phrases::LOGGING_ITEMS, "{0} items left to log. Please wait..." });
	phrases.insert({ Phrases::LOGGING_TIME_LIMIT, "Logging time limit reached. Discarding data and shutting down." });
	phrases.insert({ Phrases::LOOKUP_BLOCK, "{0} {placed|broke} {1}." });
	phrases.insert({ Phrases::LOOKUP_CONTAINER, "{0} {added|removed} {1} {2}." });
	phrases.insert({ Phrases::LOOKUP_HEADER, "{0} Lookup Results" });
	phrases.insert({ Phrases::LOOKUP_INTERACTION, "{0} {clicked|killed} {1}." });
	phrases.insert({ Phrases::LOOKUP_ITEM, "{0} {picked up|dropped} {1} {2}." });
	phrases.insert({ Phrases::LOOKUP_LOGIN, "{0} logged {in|out}." });
	phrases.insert({ Phrases::LOOKUP_PAGE, "Page {0}" });
	phrases.insert({ Phrases::LOOKUP_PROJECTILE, "{0} {threw|shot} {1} {2}." });
	phrases.insert({ Phrases::LOOKUP_ROWS_FOUND, "{0} {row|rows} found." });
	phrases.insert({ Phrases::LOOKUP_SEARCHING, "Lookup searching. Please wait..." });
	phrases.insert({ Phrases::LOOKUP_STORAGE, "{0} {deposited|withdrew} {1} {2}." });
	phrases.insert({ Phrases::LOOKUP_TIME, "{0} ago" });
	phrases.insert({ Phrases::LOOKUP_USERNAME, "{0} logged in as {1}." });
	phrases.insert({ Phrases::MAXIMUM_RADIUS, "The maximum {lookup|rollback|restore} radius is {0}." });
	phrases.insert({ Phrases::MISSING_ACTION_USER, "To use that action, please specify a user." });
	phrases.insert({ Phrases::MISSING_LOOKUP_TIME, "Please specify the amount of time to {lookup|rollback|restore}." });
	phrases.insert({ Phrases::MISSING_LOOKUP_USER, "Please specify a user or {block|radius} to lookup." });
	phrases.insert({ Phrases::MISSING_PARAMETERS, "Please use \"{0}\"." });
	phrases.insert({ Phrases::MISSING_ROLLBACK_RADIUS, "You did not specify a {rollback|restore} radius." });
	phrases.insert({ Phrases::MISSING_ROLLBACK_USER, "You did not specify a {rollback|restore} user." });
	phrases.insert({ Phrases::MYSQL_UNAVAILABLE, "Unable to connect to MySQL server." });
	phrases.insert({ Phrases::NETWORK_CONNECTION, "Connection by {0} {successful|failed}. Using {1} {2}." });
	phrases.insert({ Phrases::NETWORK_TEST, "Network test data has been successful sent." });
	phrases.insert({ Phrases::NO_DATA, "No data found at {0}." });
	phrases.insert({ Phrases::NO_DATA_LOCATION, "No {data|transactions|interactions|messages} found at this location." });
	phrases.insert({ Phrases::NO_PERMISSION, "You do not have permission to do that." });
	phrases.insert({ Phrases::NO_RESULTS, "No results found." });
	phrases.insert({ Phrases::NO_RESULTS_PAGE, "No {results|data} found for that page." });
	phrases.insert({ Phrases::NO_ROLLBACK, "No {pending|previous} rollback/restore found." });
	phrases.insert({ Phrases::PATCH_INTERRUPTED, "Upgrade interrupted. Will try again on restart." });
	phrases.insert({ Phrases::PATCH_OUTDATED_1, "Unable to upgrade databases older than {0}." });
	phrases.insert({ Phrases::PATCH_OUTDATED_2, "Please upgrade with a supported version of CoreProtect." });
	phrases.insert({ Phrases::PATCH_PROCESSING, "Processing new data. Please wait..." });
	phrases.insert({ Phrases::PATCH_SKIP_UPDATE, "Skipping {table|index} {update|creation|removal} on {0}." });
	phrases.insert({ Phrases::PATCH_STARTED, "Performing {0} upgrade. Please wait..." });
	phrases.insert({ Phrases::PATCH_SUCCESS, "Successfully upgraded to {0}." });
	phrases.insert({ Phrases::PATCH_UPGRADING, "Database upgrade in progress. Please wait..." });
	phrases.insert({ Phrases::PLEASE_SELECT, "Please select: \"{0}\" or \"{1}\"." });
	phrases.insert({ Phrases::PREVIEW_CANCELLED, "Preview cancelled." });
	phrases.insert({ Phrases::PREVIEW_CANCELLING, "Cancelling preview..." });
	phrases.insert({ Phrases::PREVIEW_IN_GAME, "You can only preview rollbacks in-game." });
	phrases.insert({ Phrases::PREVIEW_TRANSACTION, "You can't preview {container|inventory} transactions." });
	phrases.insert({ Phrases::PURGE_ABORTED, "Purge failed. Database may be corrupt." });
	phrases.insert({ Phrases::PURGE_ERROR, "Unable to process {0} data!" });
	phrases.insert({ Phrases::PURGE_FAILED, "Purge failed. Please try again later." });
	phrases.insert({ Phrases::PURGE_IN_PROGRESS, "Purge in progress. Please try again later." });
	phrases.insert({ Phrases::PURGE_MINIMUM_TIME, "You can only purge data older than {0} {days|hours}." });
	phrases.insert({ Phrases::PURGE_NOTICE_1, "Please note that this may take some time." });
	phrases.insert({ Phrases::PURGE_NOTICE_2, "Do not restart your server until completed." });
	phrases.insert({ Phrases::PURGE_OPTIMIZING, "Optimizing database. Please wait..." });
	phrases.insert({ Phrases::PURGE_PROCESSING, "Processing {0} data..." });
	phrases.insert({ Phrases::PURGE_REPAIRING, "Attempting to repair. This may take some time..." });
	phrases.insert({ Phrases::PURGE_ROWS, "{0} {row|rows} of data deleted." });
	phrases.insert({ Phrases::PURGE_STARTED, "Data purge started on \"{0}\"." });
	phrases.insert({ Phrases::PURGE_SUCCESS, "Data purge successful." });
	phrases.insert({ Phrases::RELOAD_STARTED, "Reloading configuration - please wait." });
	phrases.insert({ Phrases::RELOAD_SUCCESS, "Configuration successfully reloaded." });
	phrases.insert({ Phrases::ROLLBACK_ABORTED, "Rollback or restore aborted." });
	phrases.insert({ Phrases::ROLLBACK_CHUNKS_FOUND, "Found {0} {chunk|chunks} to modify." });
	phrases.insert({ Phrases::ROLLBACK_CHUNKS_MODIFIED, "Modified {0}/{1} {chunk|chunks}." });
	phrases.insert({ Phrases::ROLLBACK_COMPLETED, "{Rollback|Restore|Preview} completed for \"{0}\"." });
	phrases.insert({ Phrases::ROLLBACK_EXCLUDED_USERS, "Excluded {user|users}: \"{0}\"." });
	phrases.insert({ Phrases::ROLLBACK_INCLUDE, "{Included|Excluded} {block|entity|target} {type|types}: \"{0}\"." });
	phrases.insert({ Phrases::ROLLBACK_IN_PROGRESS, "A rollback/restore is already in progress." });
	phrases.insert({ Phrases::ROLLBACK_LENGTH, "Time taken: {0} {second|seconds}." });
	phrases.insert({ Phrases::ROLLBACK_MODIFIED, "{Modified|Modifying} {0}." });
	phrases.insert({ Phrases::ROLLBACK_RADIUS, "Radius: {0} {block|blocks}." });
	phrases.insert({ Phrases::ROLLBACK_SELECTION, "Radius set to \"{0}\"." });
	phrases.insert({ Phrases::ROLLBACK_STARTED, "{Rollback|Restore|Preview} started on \"{0}\"." });
	phrases.insert({ Phrases::ROLLBACK_TIME, "Time range: {0}." });
	phrases.insert({ Phrases::ROLLBACK_WORLD_ACTION, "Restricted to {world|action} \"{0}\"." });
	phrases.insert({ Phrases::SIGN_HEADER, "Sign Messages" });
	phrases.insert({ Phrases::STATUS_CONSUMER, "Consumer: {0} {item|items} in queue." });
	phrases.insert({ Phrases::STATUS_DATABASE, "Database: Using {0}." });
	phrases.insert({ Phrases::STATUS_INTEGRATION, "{0}: Integration {enabled|disabled}." });
	phrases.insert({ Phrases::STATUS_LICENSE, "License: {0}" });
	phrases.insert({ Phrases::STATUS_VERSION, "Version: {0}" });
	phrases.insert({ Phrases::TELEPORTED, "Teleported to {0}." });
	phrases.insert({ Phrases::TELEPORTED_SAFETY, "Teleported you to safety." });
	phrases.insert({ Phrases::TELEPORT_PLAYERS, "Teleport command can only be used by players." });
	phrases.insert({ Phrases::TIME_DAYS, "{0} {day|days}" });
	phrases.insert({ Phrases::TIME_HOURS, "{0} {hour|hours}" });
	phrases.insert({ Phrases::TIME_MINUTES, "{0} {minute|minutes}" });
	phrases.insert({ Phrases::TIME_SECONDS, "{0} {second|seconds}" });
	phrases.insert({ Phrases::TIME_WEEKS, "{0} {week|weeks}" });
	phrases.insert({ Phrases::UPDATE_ERROR, "An error occurred while checking for updates." });
	phrases.insert({ Phrases::UPDATE_HEADER, "{0} Update" });
	phrases.insert({ Phrases::UPDATE_NOTICE, "Notice: {0} is now available." });
	phrases.insert({ Phrases::UPGRADE_IN_PROGRESS, "Upgrade in progress. Please try again later." });
	phrases.insert({ Phrases::USER_NOT_FOUND, "User \"{0}\" not found." });
	phrases.insert({ Phrases::USER_OFFLINE, "The user \"{0}\" is not online." });
	phrases.insert({ Phrases::USING_MYSQL, "Using MySQL for data storage." });
	phrases.insert({ Phrases::USING_SQLITE, "Using SQLite for data storage." });
	phrases.insert({ Phrases::VALID_DONATION_KEY, "Valid donation key." });
	phrases.insert({ Phrases::VERSION_NOTICE, "Version {0} is now available." });
	phrases.insert({ Phrases::VERSION_REQUIRED, "{0} {1} or higher is required." });
	phrases.insert({ Phrases::WORLD_NOT_FOUND, "World \"{0}\" not found." });

	userPhrases = phrases;
	translatedPhrases = phrases;
}