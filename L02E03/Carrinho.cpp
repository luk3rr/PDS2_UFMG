#include "Carrinho.hpp"

Carrinho::~Carrinho() {
    for (std::vector<Pedido*>::iterator it = this->_pedidos.begin(); it != this->_pedidos.end(); it++) {
        delete *it;
    }
}

void Carrinho::adicionar_pedido(Produto* produto, int quantidade) {
    Pedido* novoPedido = new Pedido(produto, quantidade);
    this->_pedidos.push_back(novoPedido);
}

void Carrinho::imprimir_resumo() {
    double totalCarrinho = 0;
    for (unsigned i=0; i < this->_pedidos.size(); i++) {
        totalCarrinho += this->_pedidos[i]->get_valor_total();

        this->_pedidos[i]->retornaProduto()->imprimir_info();
        
        std::cout << "Qtde: " << this->_pedidos[i]->retornaQuantidade() 
            << " Total produto: R$ " << std::fixed << std::setprecision(2) 
            << this->_pedidos[i]->get_valor_total() << std::endl;
    }
    std::cout << "Total carrinho: R$ " << std::fixed << std::setprecision(2) 
        << totalCarrinho << std::endl;
}

