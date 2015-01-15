#include "navi.h"
#include <iostream>
void Navi (Object room)
{
bool running = true;
Object *active_r = &room;
	while(running==true)
	{
	std::cout << (*active_r).Lore();
	
	};
};
