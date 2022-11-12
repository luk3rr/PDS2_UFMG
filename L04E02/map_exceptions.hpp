#ifndef MAP_EXCEPTIONS_H
#define MAP_EXCEPTIONS_H

#include <exception>
#include <string>

namespace map_exc {
    class key_in_use : public std::exception {
        private:
            int _key;

        public:
            key_in_use(int key) {
                this->_key = key;
            }

            const char* what() const throw() {
                return "Key in use";
            }
    };

    class key_not_found : public std::exception {
        private:
            int _key;

        public:
            key_not_found(int key) {
                this->_key = key;
            }

            const char* what() const throw() {
                return "Key not found";
            }

            int get_key() {
                return this->_key;
            }
    };

    class file_not_found : public std::exception {
        private:
            const char* _filename;
            
        public:
            file_not_found(const char* filename) {
                this->_filename = filename;
            }

            const char* what() const throw() {
                return "File not found";
            }

            const char* get_file_name(){
                return this->_filename;
            }
    };

    class invalid_map_in_file : public std::exception {
        private:
            int _key, _line;
            const char* _filename;

        public:
            invalid_map_in_file(const char* filename, int line, int key) {
                this->_filename = filename;
                this->_line = line;
                this->_key = key;
            }

            const char* what() const throw() {
                return "Invalid Map in File";
            }

            const char* get_file_name() {
                return this->_filename;
            }

            int get_line() {
                return this->_line;
            }

            int get_key() {
                return this->_key;
            }
    };
}
#endif // !MAP_EXCEPTIONS_H
