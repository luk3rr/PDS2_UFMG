#include "peixe.hpp"

Peixe::Peixe(double peso, char sexo) : Criatura("Peixe") {
    this->_peso = peso;
    this->_sexo = sexo;
    std::cout << "Peixe:" << this->get_subtipo() << std::endl;
}

Peixe::~Peixe() {
    std::cout << "~Peixe:" << this->get_subtipo() << std::endl;
}

double Peixe::get_peso() {
    return this->_peso;
}

char Peixe::get_sexo() {
    return this->_sexo;
}

void Peixe::print_info() {
    Criatura::print_info();
    std::cout << "\tPeso: " << this->_peso << " kg" << std::endl;
    std::cout << "\tSexo: " << this->_sexo << std::endl;
}

list<unique_ptr<Criatura>> Peixe::acasalar(shared_ptr<Criatura> c) {
    list<unique_ptr<Criatura>> aux = {};

    if (this->get_subtipo() == c->get_subtipo()) {
        shared_ptr<Peixe> cConverted = dynamic_pointer_cast<Peixe>(c);

        if (this->get_sexo() != cConverted->get_sexo()) {
            double peso = (this->get_peso() + cConverted->get_peso()) / 2;
            aux.push_back(unique_ptr<Peixe>(new Peixe(peso, 'F')));
            aux.push_back(unique_ptr<Peixe>(new Peixe(peso, 'M')));
        }       
    }
    return aux;
}


