#ifndef MAP_H
#define MAP_H

#include <string>
#include <list>
#include <fstream>
#include <algorithm>
#include <iostream>

#include "map_exceptions.hpp"

class Map {
    private:
        std::list<int> _key, _value;

    public:
        void read_from_file(std::string filename);

        bool find(int key, int &found_val);

        void insert(int key, int val);

        void remove(int key);

        void print();
};

#endif // !MAP_H
