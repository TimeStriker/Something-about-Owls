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
std::string Room::description ()
	{
	return descript;
	};
