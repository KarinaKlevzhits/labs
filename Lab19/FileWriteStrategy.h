#pragma once
#include <string>
namespace file_strategy
{
	char* string_to_pchar(std::string str)
	{
		char* result = new char[str.length() + 1];
		std::strcpy(result, str.c_str());
		return result;
	}
	class BaseWriter
	{
		
	public:
		std::string content;
		std::string file_name;
		virtual void write() = 0;
	};
}
