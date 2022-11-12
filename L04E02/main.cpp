#include "map.hpp"
#include <string>

int main() {
    int key, value;
    std::string comando, file;
    Map myMap;

    while (std::cin >> comando) {
        if (comando == "i") {
            std::cin >> key >> value;
            try {
                myMap.insert(key, value);

            } catch(map_exc::key_in_use &e) {
                std::cout << e.what() << " key = " << key << std::endl;
            }
            
        } else if (comando == "f") {
            std::cin >> key;
            if (myMap.find(key, value)) {
                std::cout << "found " << value << " in key " << key << std::endl;

            } else {
                std::cout << "key " << key << " not found" << std::endl;
            }

        } else if (comando == "r") {            
            std::cin >> key;
            try {
                myMap.remove(key);

            } catch (map_exc::key_not_found &e) {
                std::cout << e.what() << " key = " << e.get_key() << std::endl;
            }

        } else if (comando == "p") {
            myMap.print();

        } else if (comando == "r_f") {
            std::cin >> file;
            try {
                myMap.read_from_file(file);

            } catch (map_exc::invalid_map_in_file &e) {
                std::cout << e.what() << " " << e.get_file_name() << " Key "
                    << e.get_key() << " in line " << e.get_line() << std::endl;

            } catch (map_exc::file_not_found &e) {
                std::cout << e.what() << " " << e.get_file_name() << std::endl;
            }
        }
    }
}
