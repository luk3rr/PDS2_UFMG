#include "map.hpp"

void Map::read_from_file(std::string filename) {
    std::ifstream file;
    file.open(filename);
    
    int auxKey, auxValue, line=1;
    std::list<int> lstKey, lstValue;
       
    if (file.is_open()) {
        while(file >> auxKey >> auxValue) {
            if (std::find(this->_key.begin(), this->_key.end(), auxKey) != this->_key.end() ||
                    std::find(lstKey.begin(), lstKey.end(), auxKey) != lstKey.end()) {
                file.close();
                throw map_exc::invalid_map_in_file(filename.c_str(), line, auxKey);

            } else {
                lstKey.push_back(auxKey);
                lstValue.push_back(auxValue);
                line++;
            } 
        }

    } else {
        file.close();
        throw map_exc::file_not_found(filename.c_str());
    }
    file.close();

    std::list<int>::iterator itKey = lstKey.begin();
    std::list<int>::iterator itValue = lstValue.begin();
    
    while (itKey != lstKey.end()) {
        this->_key.push_back(*itKey);
        this->_value.push_back(*itValue);
        itKey++;
        itValue++;
    }
}

bool Map::find(int key, int &found_val) {
    std::list<int>::iterator itKey = this->_key.begin();
    std::list<int>::iterator itValue = this->_value.begin();
    
    while (itKey != this->_key.end()) {
        if (*itKey != key) {
            itKey++;
            itValue++;
        
        } else {
            found_val = *itValue;
            return true;
        }
    }
    return false;
}

void Map::insert(int key, int val) {
    if (this->find(key, val)) {
        throw map_exc::key_in_use(key);

    } else {
        this->_key.push_back(key);
        this->_value.push_back(val);
    }
}

void Map::remove(int key) {
    int value;

    if (this->find(key, value)) {
        std::list<int>::iterator itKey = this->_key.begin();
        std::list<int>::iterator itValue = this->_value.begin();

         while (itKey != this->_key.end()) {
            if (*itKey != key) {
                itKey++;
                itValue++;

            } else {
                this->_value.erase(itValue);
                this->_key.erase(itKey);
                break;
           }
        }
    } else {
        throw map_exc::key_not_found(key);
    }
}

void Map::print() {
    std::list<int>::iterator itKey = this->_key.begin();
    std::list<int>::iterator itValue = this->_value.begin();

    std::cout << "========================" << std::endl;
    while (itKey != this->_key.end()) {
        std::cout << "<" << *itKey << "," << *itValue << ">" << std::endl;
        itKey++;
        itValue++;
    }
    std::cout << "========================" << std::endl;
}
