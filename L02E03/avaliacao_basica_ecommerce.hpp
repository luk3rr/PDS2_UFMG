#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <iostream>

#include "Catalogo.hpp"
#include "Carrinho.hpp"

using namespace std;

void avaliacao_basica() {
    
    cout << "----------" << endl;

    Brinquedo* brinquedo = new Brinquedo(1, 1.0, "BQ1", 1);    
    brinquedo->imprimir_info();
    delete brinquedo;

    cout << "----------" << endl;

    Livro* livro = new Livro(2, 2.0, "LT1", "LA1", 2222);
    livro->imprimir_info();
    delete livro;

    cout << "----------" << endl;

    Eletronico* eletronico = new Eletronico(3, 3.0, "EMA1", "EMO1");
    eletronico->imprimir_info();
    delete eletronico;

    cout << "----------" << endl;

    Catalogo catalogo;    
    catalogo.adicionar_produto("BQ1", 1, 1.0);
    catalogo.adicionar_produto("LT1", "LA1", 2222, 2.0);
    catalogo.adicionar_produto("EMA1", "EMO1", 3.0);

    catalogo.imprimir();

    cout << "----------" << endl;

    Produto* produto = catalogo.buscar_produto(3);
    produto->imprimir_info();

    cout << "----------" << endl;

    produto = catalogo.buscar_produto(5);
    if (produto == nullptr) {
        cout << "CORRECT" << endl; 
    } else {
        cout << "ERROR"; 
    }

    cout << "----------" << endl;

    Carrinho carrinho;
    carrinho.imprimir_resumo();

    cout << "----------" << endl;

    produto = catalogo.buscar_produto(1);
    carrinho.adicionar_pedido(produto, 2);

    produto = catalogo.buscar_produto(2);
    carrinho.adicionar_pedido(produto, 3);
    carrinho.imprimir_resumo();

    cout << "----------" << endl;
}

#endif