#pragma once
#include <string>
	class CStyleFileOpener
	{

	public:
		std::string file_name;
		FILE* pFile;
		FILE* file_open()
		{
			char* file_name_char = file_strategy::string_to_pchar(file_name);
			pFile = fopen(file_name_char, "w");
			return pFile;
		}
		~CStyleFileOpener()
		{
			
		};

	};
