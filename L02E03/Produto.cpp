#include "Produto.hpp"

Produto::Produto(int id, float valorUnitario) {
    this->_id = id;
    this->_valorUnitario = valorUnitario;
}

int Produto::retorna_id() {
    return this->_id;
}

float Produto::retornaValorUnitario() {
    return this->_valorUnitario;
}
