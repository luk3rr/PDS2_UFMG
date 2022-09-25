#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <iostream>

#include "RegistroAvaliacoes.hpp"
#include "Review.hpp"

using namespace std;

void avaliacao_basica() {
    
    cout << "----------" << endl;

    Usuario* usuario = new Usuario("UL1", "UN1");
    usuario->imprimir_info();

    cout << "----------" << endl;

    Filme* filme = new Filme(1, "FN1", "FG1", 90);
    filme->imprimir_nota_consolidada();        

    cout << "----------" << endl;

    Review* review1 = new Review(filme, "R1", 10.0);
    usuario->associar_review(review1);
    usuario->imprimir_reviews();    

    cout << "----------" << endl;

    Review* review2 = filme->adicionar_review("R2", 0.0);
    usuario->associar_review(review2);
    usuario->imprimir_reviews();

    delete review1;
    delete review2;
    delete filme;

    cout << "----------" << endl;

    RegistroAvaliacoes registro;

    registro.adicionar_usuario("UL3", "UN1");
    registro.adicionar_usuario("UL2", "UN2");
    registro.adicionar_usuario("UL1", "UN3");
    registro.imprimir_estatisticas_usuarios();

    cout << "----------" << endl;

    registro.adicionar_filme("FN1", "FG1", 90);
    registro.adicionar_filme("FN2", "FG1", 90);
    registro.adicionar_filme("FN3", "FG1", 90);
    registro.imprimir_registro_geral();

    cout << "----------" << endl;

    registro.adicionar_review(3, "UL1", "C1", 10.0);
    registro.adicionar_review(3, "UL2", "C2", 5.5);
    registro.imprimir_registro_geral();

    cout << "----------" << endl;
    
    registro.imprimir_reviews_usuario("UL1");

    cout << "----------" << endl;

    registro.imprimir_reviews_usuario("UL3");

    cout << "----------" << endl;    
}

#endif
