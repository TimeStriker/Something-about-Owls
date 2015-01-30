#include "func.h"
int main ()
{
//Problem: The stuff I declared isn't in scope....
World Velo;
World* pvelo=&Velo;
std::cout<<Read ("/intro");
Navi(Velo.r_cube,pvelo);
}
