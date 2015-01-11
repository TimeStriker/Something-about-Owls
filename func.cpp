#include "func.h"

bool Object::Check (std::string a)
{
 if (Find(a,cmd)==true) return true;
	else return false;
};

bool Object::Check (int a) 
{
if (Find(a,counters)==true) return true;
	else return false;
};

template <class type, class vec_type>
bool Find (type stuff, std::vector<vec_type> vec)
{
	for (int it = 0; it != vec.size(); ++it)
		{
		if (vec[it]==stuff) return true;
		};
return false;
};

std::string Object::Trigger(std::string mystr)
{

};
