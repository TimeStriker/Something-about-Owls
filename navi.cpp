#include "navi.h"
#include <iostream>
//A 'Navigator' of sorts
void Navi (Object room, World*pworld)
{
bool running = true;
Object *active_r = &room; //Pointer to change room from anywhere
bool *prunning = &running; //Pointer to kill navi from anywhere
std::string input;
	while(running==true)
	{
	std::cout << (*active_r).Lore();
	std::getline(std::cin, input);
	Crunch (input,active_r, prunning);
	};
};

//Suppossed to process inputs and apply them in a given context
void Crunch (std::string in, Object*active_r, bool*prunning)
{

};
