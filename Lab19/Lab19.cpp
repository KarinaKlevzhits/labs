#include <iostream>
#include "CStyleFileStrategy.h"
#include "FileWriter.h"
class Program 
{

};
int main()
{
	FileWriter fw(new file_strategy::CStyleWriter,"hello.txt","dcsd");
}
