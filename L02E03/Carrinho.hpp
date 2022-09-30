#ifndef CARRINHO_H 
#define CARRINHO_H

#include "Pedido.hpp"
#include "Produto.hpp"

#include <iomanip>
#include <iostream>
#include <vector>

class Carrinho {
    private:
        std::vector<Pedido*> _pedidos;

    public:
        void adicionar_pedido(Produto* produto, int quantidade);

        void imprimir_resumo();

        ~Carrinho();
};

#endif // CARRINHO_H
