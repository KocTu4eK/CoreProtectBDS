#pragma once
#include "pch.h"
#include "phrase.h"

class Language
{
	static tbb::concurrent_hash_map<Phrases, std::string> phrases;
	static tbb::concurrent_hash_map<Phrases, std::string> userPhrases;
	static tbb::concurrent_hash_map<Phrases, std::string> translatedPhrases;

protected:
	static std::string getPhrase(Phrases phrase)
	{
		tbb::concurrent_hash_map<Phrases, std::string>::accessor accessor;
		phrases.find(accessor, phrase);
		return accessor->second;
	}

	static std::string getUserPhrase(Phrases phrase)
	{
		tbb::concurrent_hash_map<Phrases, std::string>::accessor accessor;
		userPhrases.find(accessor, phrase);
		return accessor->second;
	}

	static std::string getTranslatedPhrase(Phrases phrase)
	{
		tbb::concurrent_hash_map<Phrases, std::string>::accessor accessor;
		translatedPhrases.find(accessor, phrase);
		return accessor->second;
	}

	static void setUserPhrase(Phrases phrase, std::string value)
	{
		tbb::concurrent_hash_map<Phrases, std::string>::accessor accessor;
		userPhrases.find(accessor, phrase);
		accessor->second = value;
	}

	static void setTranslatedPhrase(Phrases phrase, std::string value)
	{
		tbb::concurrent_hash_map<Phrases, std::string>::accessor accessor;
		translatedPhrases.find(accessor, phrase);
		accessor->second = value;
	}

public:
	static void loadPhrases();
};
