#pragma once
#include "pch.h"
#include "utility/color.h"

class ChatMessage
{
	std::string pluginName = Color::DARK_AQUA + "CoreProtect";

	std::string message;
	std::string textColor = Color::WHITE;
	std::string textStyle;
	std::string separator = "-";
	bool useTag = true;
	bool useSpaces = true;

public:
	ChatMessage(std::string string)
	{
		this->message = parseQuotes(string, this->textColor);
	}

	std::string getMessage()
	{
		return this->message;
	}

	ChatMessage setColor(std::string color)
	{
		this->textColor = color;
		return *this;
	}

	ChatMessage setStyle(std::string style)
	{
		this->textStyle = style;
		return *this;
	}

	ChatMessage setSeparator(std::string separator)
	{
		this->separator = separator;
		return *this;
	}

	ChatMessage setUseTag(bool tag)
	{
		this->useTag = tag;
		return *this;
	}

	ChatMessage setUseSpaces(bool spaces)
	{
		this->useSpaces = spaces;
		return *this;
	}

	ChatMessage append(std::string color, std::string string)
	{
		this->message += color + string;
		return *this;
	}

	std::string build()
	{
		return (this->useTag ? pluginName : createSpaces(pluginName, true, this->useSpaces)) + this->textColor + " " + this->separator + " " + this->textStyle + this->message;
	}

	std::string build(std::string color)
	{
		setColor(textColor);
		return build();
	}

	std::string build(bool tag)
	{
		setUseTag(tag);
		return build();
	}

	std::string build(std::string color, bool tag)
	{
		setColor(color);
		setUseTag(tag);
		return build();
	}

	std::string build(std::string color, std::string style)
	{
		setColor(color);
		setStyle(style);
		return build();
	}

	std::string build(std::string color, std::string style, bool tag)
	{
		setColor(color);
		setStyle(style);
		setUseTag(tag);
		return build();
	}

	std::string build(std::string color, std::string style, std::string separator)
	{
		setColor(color);
		setStyle(style);
		setSeparator(separator);
		return build();
	}

	std::string build(std::string color, std::string style, std::string separator, bool tag)
	{
		setColor(color);
		setStyle(style);
		setSeparator(separator);
		setUseTag(tag);
		return build();
	}

	static std::string parseQuotes(std::string string, std::string textColor);

	static std::string createSpaces(std::string string, bool separatorOffset, bool createSpaces);
};
