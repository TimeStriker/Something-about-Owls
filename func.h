#pragma once
#define FUNC
#ifdef FUNC
#include <iostream>
#include <vector>
void Initialise ();
void PrintThis (std::string a);
const char newl = '\n';
class Room
        {
        bool visited, destroyed, solved;
        std::string stuff [50], descript;
        public:
        Room ();
        Room (std::string,std::string z[]);
        std::string stuffhere (std::string);
        void set_stuffhere ();
        std::string description();
        void set_descript (std::string);
        };
class Object
	{
	std::string descript;
	public:
	void set_descript ();
	std::string description();
	Object (std::string a);
	};
void userint (Room* a);
#endif
