#pragma once
#include <stdio.h>
#include"FileWriteStrategy.h"
#include "CStyleFileOpener.h"
namespace file_strategy
{
	class CStyleWriter :public file_strategy::BaseWriter
	{
	private:
		FILE* pFile;
		CStyleFileOpener file_opener;
		
	public:
		void open()
		{

			file_opener.file_name = file_name;
			pFile = file_opener.file_open();
		}
		virtual void write() override
		{
			open();
			char* content_char = file_strategy::string_to_pchar(content);
			fprintf(pFile, "%s", content_char);
		}
	};
}
