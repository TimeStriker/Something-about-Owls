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
std::cout<<a<<'\n';
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
char word[50];
std::string words;
int counter=0;
	for(int oc=0;oc<in.size();oc++)
	{
		if (in[oc] != ' ')
		{
		word[counter]=in[oc];
		++counter;
		}
		else if (counter>0)
		{
		word[oc]='\0';
		words.clear();
		words = word;
			if (words=="help")
				{std::cout<<"You can use:\n help:\n use:"<<'\n';}
			else {std::cout << ">>look";};
		}
		else {counter=0;};
	};
};

void userint (Room* a)
{
bool running = true;
Room * activeroom=a;
std::string input;
	while (running==true)
	{
	PrintThis(activeroom->description());
	std::cout<< ">>"<<newl;
	std::getline(std::cin,input);
	crunch (input);
	};
};
void stall ()
{
	do
	{
PrintThis(">>PRESS ENTER YOU FOOL<<");
	} while (std::cin.get() != '\n');
};

