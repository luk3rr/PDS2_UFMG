#ifndef PEDIDO_H
#define PEDIDO_H

#include "Produto.hpp"

class Pedido {
    private:
        Produto* _produto;
        int _quantidade;

    public:
        Pedido(Produto* produto, int quantidade);

        Produto* retornaProduto();

        double get_valor_total();

        int retornaQuantidade();
};

#endif // PEDIDO_H
