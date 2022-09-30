#include "Eletronico.hpp"

Eletronico::Eletronico(int id, float valor, std::string marca, std::string modelo) : Produto(id, valor) {
    this->_marca = marca;
    this->_modelo = modelo;
}

void Eletronico::imprimir_info() {
    std::cout << this->retorna_id() << "\tEletronico\t" << this->_marca << 
        "\t" << this->_modelo << "\tR$ " << std::fixed << std::setprecision(2)
        << this->retornaValorUnitario() << std::endl; 
}
