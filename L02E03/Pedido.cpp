#include "Pedido.hpp"

Pedido::Pedido(Produto* produto, int quantidade) {
    this->_produto = produto;
    this->_quantidade = quantidade;
}

Produto* Pedido::retornaProduto() {
    return this->_produto;
}

double Pedido::get_valor_total() {
    return this->_produto->retornaValorUnitario() * this->_quantidade;
}

int Pedido::retornaQuantidade() {
    return this->_quantidade;
}
