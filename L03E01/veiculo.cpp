#include "veiculo.hpp"

int Veiculo::_nextId = 1;

Veiculo::Veiculo(std::string subtipo, int veloMax, int nPassageiros) {
    this->_id = this->_nextId;
    this->_nextId++;
    this->_subtipo = subtipo;
    this->_veloMax = veloMax;
    this->_nPassageiros = nPassageiros;
}

Veiculo::~Veiculo() {
    std::cout << "Destrutor Veiculo" << std::endl;
}

int Veiculo::getId() {
    return this->_id;
}

void Veiculo::printInfo() {
    std::cout << "Info: Veiculo " << this->_id << std::endl;
    std::cout << "Preco estimado: RS " << estimaPreco() << ",00" << std::endl;
    std::cout << "\tSubtipo: " << this->_subtipo << std::endl;
    std::cout << "\tVelocidade maxima: " << this->_veloMax << " km/h" << std::endl;
    std::cout << "\tCapacidade de passageiros: " << this->_nPassageiros << std::endl;
}
