#include "polvo.hpp"

Polvo::Polvo(double qi) : Criatura("Polvo") {
    this->_qi = qi;
    std::cout << "Polvo:" << this->get_subtipo() << std::endl;
}

Polvo::~Polvo() {
    std::cout << "~Polvo:" << this->get_subtipo() << std::endl;
}

double Polvo::get_qi() {
    return this->_qi;
}

void Polvo::print_info() {
    Criatura::print_info();
    std::cout << "\tQI: " << this->_qi << std::endl;
}

list<unique_ptr<Criatura>> Polvo::acasalar(shared_ptr<Criatura> c) {
    list<unique_ptr<Criatura>> aux = {};

    if (this->get_subtipo() == c->get_subtipo()) {
        shared_ptr<Polvo> cConverted = dynamic_pointer_cast<Polvo>(c);
        double mediaQi = (this->get_qi() + cConverted->get_qi()) / 2;
        aux.push_back(unique_ptr<Polvo>(new Polvo(mediaQi)));
    }
    return aux;
}
