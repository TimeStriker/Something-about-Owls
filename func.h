#pragma once
#include <iostream>
#include <vector>
//Defining Rooms and Objects
class Object {
	std::string name, lore; //Objects and Rooms need names and lore :P
	std::vector<std::string> desc, cmd; //Additional printing stuff
	bool room; //If this is a room or Object
	std::vector<int> counters; //Various 'counters' that track progress
public:
	Object (std::string n, std::string l ,bool r) {name=n; room=r; lore=l;}
	void Load (std::vector<std::string> d, std::vector<std::string> c)
			 {desc=d; cmd=c;} //assigns appropriate vector to room
	void Spec (int a) {counters.push_back(a);}
	bool Check (std::string);
	bool Check (int);
	std::string Name (void) {return name;}
	std::string Lore (void) {return lore;}
	std::string Trigger (std::string);

	};
template <class type, class vec_type>
bool Find (type stuff, std::vector<vec_type> vec);

void Init ();

std::string Read (std::string);
