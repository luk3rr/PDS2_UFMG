#include "Filme.hpp"
#include "Review.hpp"

#include <iostream>

Review::Review(Filme* filme, std::string comentario, float nota) {
    this->_filme = filme;
    this->_comentario = comentario;
    this->_nota = nota;
    this->nomeFilme = filme->retornaNomeFilme();
}

void Review::imprimir_dados() {
    std::cout << this->nomeFilme << "\t" << this->_comentario << "\t" << this->_nota << std::endl;
}

double Review::retornar_nota() {
    return this->_nota;
}
