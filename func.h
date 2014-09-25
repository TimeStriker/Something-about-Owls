#pragma once
#include <iostream>
void PrintThis (std::string a);
const char newl = '\n';

class Room
        {
        bool visited, destroyed, solved;
        std::string stuff [50], descript;
        public:
        Room ();
        Room (bool, bool, bool);
        std::string stuffhere (std::string);
        void set_stuffhere ();
        std::string description ();
        void set_descript (std::string);
        };

