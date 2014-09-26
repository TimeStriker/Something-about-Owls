#include "func.h"
#include <iostream>

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
Room::Room (bool v, bool s, bool d)
	{
	visited = v;
	solved = s;
	destroyed = d;
	};
void Room::set_descript (std::string a)
	{
	descript = a;
	};
std::string Room::description()
	{
	return descript;
	};

void crunch (std::string in)
{
};

void userint (Room a)
{
bool running = true;
Room * activeroom  = &a;
std::string input;
	while (running = true);
	{
	PrintThis (a.description());
	std::cin>>input;
	crunch (input);
	};
};

