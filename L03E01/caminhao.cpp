#include "caminhao.hpp"

Caminhao::Caminhao(std::string subtipo, int veloMax, int nPassageiros, int cargaMax) : Veiculo(subtipo, veloMax, nPassageiros) {
    this->_cargaMax = cargaMax;
}

Caminhao::Caminhao(int veloMax, int nPassageiros, int cargaMax) : Veiculo("Caminhao", veloMax, nPassageiros) {
    this->_cargaMax = cargaMax;
}

Caminhao::~Caminhao() {
    std::cout << "Destrutor Caminhao" << std::endl;
}

int Caminhao::estimaPreco() {
    return 50000 + 100 * this->_cargaMax + 10 * this->_veloMax;
}

void Caminhao::printInfo() {
    Veiculo::printInfo();
    std::cout << "\tCarga maxima: " << this->_cargaMax << " kg" << std::endl;
}
