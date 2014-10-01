#include "func.h"
#include <vector>
#include <iostream>
#include <sstream>
std::vector<std::string> commands;
void Initialise ()
	{
	commands.push_back("help");
	commands.push_back("look");
	};
void PrintThis (std::string a)
{
std::cout<<a;
};
Room::Room ()
	{
	visited = false;
	solved = false;
	destroyed = false; 
	};
Room::Room (std::string in,std::string items [50])
	{
	int a;
	descript=in;
	for (a=0;a<50;++a)
		{stuff[a]=items[a];};
	};
void Room::set_descript (std::string a)
	{
	descript = a;
	};
std::string Room::description()
	{
	return descript;
	};
std::string Object::description()
	{
	return descript;
	};
Object::Object (std::string a)
	{
	descript=a;
	};

void crunch (std::string in)
{
	if ("h"==in)
		{
		PrintThis ("You can use: /n help: /n use:");
		};

};

void userint (Room a)
{
bool running = true;
Room * activeroom  = &a;
std::string input;
PrintThis ("nugget");
	while (running = true);
	{
	std::cin.ignore();
	PrintThis (a.description());
	PrintThis ("nugget");
	std::getline (std::cin,input);
	std::cout<<input;
	crunch (input);
	};
};

