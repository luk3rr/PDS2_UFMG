#include "caminhao_autonomo.hpp"

CaminhaoAutonomo::CaminhaoAutonomo(int veloMax, int nPassageiros, int cargaMax, std::string fabricante) : Caminhao("CaminhaoAutonomo", veloMax, nPassageiros, cargaMax) {
    this->_fabricante = fabricante;
}

CaminhaoAutonomo::~CaminhaoAutonomo() {
    std::cout << "Destrutor CaminhaoAutonomo" << std::endl;
}

int CaminhaoAutonomo::estimaPreco() {
    if (this->_fabricante == "Tesla") return 500000 + 100 * this->_cargaMax + 10 * this->_veloMax;
    else if (this->_fabricante == "Waymo") return 400000 + 100 * this->_cargaMax + 10 * this->_veloMax;
    return 0;
}

void CaminhaoAutonomo::printInfo() {
    Caminhao::printInfo();
    std::cout << "\tFabricante: " << this->_fabricante << std::endl;
}
