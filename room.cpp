#include "room.h"
//Makes rooms and objects
World::World () : 
//Rooms
r_cube("Cube Room",Read("/r_cube"),true)

//Items
, cube("Cube", Read("/i_cube"),false)

{
//Items -> rooms

r_cube.Item (cube);
};


//Returns a string from a file using an id string "/example"
std::string Read (std::string id)
{
	std::string mystuff, nyan;
 std::ifstream sfile ("story.txt");
	if (sfile.is_open())
	{
		while (getline (sfile, mystuff))
		{
			if (mystuff == id)
			{
				while (getline (sfile, mystuff))
		  			{
			if (mystuff != "/0/")
			nyan = nyan + mystuff + '\n';
			else {sfile.close(); return nyan;}
		  			}
			}
		}

	sfile.close();
	}
else {return "HELL NO";}
};

//std::map<int,Object> World ;
//World [1] = object something 
//World [1]
