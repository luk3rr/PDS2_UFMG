#include "Brinquedo.hpp"

Brinquedo::Brinquedo(int id, float valor, std::string nome, int idadeMinima) : Produto(id, valor) {
    this->_nome = nome;
    this->_idadeMinima = idadeMinima;
}

void Brinquedo::imprimir_info() {
    std::cout << this->retorna_id() << "\tBrinquedo\t" << this->_nome << "\t" 
        << this->_idadeMinima << "\tR$ " << std::fixed << std::setprecision(2) 
        << this->retornaValorUnitario() << std::endl; 
}
