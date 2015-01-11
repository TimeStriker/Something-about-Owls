#include "room.h"

void Init ()
{
std::cout<<"Pie"<<'\n';
};

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
			else {return nyan; sfile.close();}
		  			}
			}
		}

	sfile.close();
	}
else {return "HELL NO";}
};
