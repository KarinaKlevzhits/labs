#pragma once
#include <string>
#include "FileWriteStrategy.h"
class FileWriter
{
	file_strategy::BaseWriter* writer;
public:
	
	FileWriter(file_strategy::BaseWriter* w, std::string file_name,std::string content) :writer(w)
	{
		file_strategy::CStyleWriter* tfws = new file_strategy::CStyleWriter();
		tfws->file_name = file_name;
		tfws->content = content;
		tfws->write();
	}

};

