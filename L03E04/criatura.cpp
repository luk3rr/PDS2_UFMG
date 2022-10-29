#include "criatura.hpp"

Criatura::Criatura(std::string subtipo) {
    std::cout << "Criatura:" << subtipo << std::endl;
    this->_subtipo = subtipo;
}

Criatura::~Criatura() {
    std::cout << "~Criatura:" << this->_subtipo << std::endl;
}

std::string Criatura::get_subtipo() {
    return this->_subtipo;
}

void Criatura::print_info() {
    std::cout << "Info: " << this->_subtipo << std::endl;
}
