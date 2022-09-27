#include "Review.hpp"
#include "Filme.hpp"

Review::Review(Filme* filme, std::string comentario, float nota) {
    this->_filme = filme;
    this->_comentario = comentario;
    this->_nota = nota;
    this->nomeFilme = filme->retornaNomeFilme();
}

void Review::imprimir_dados() {
    std::cout << this->nomeFilme << "\t" << this->_comentario << "\t" << 
        std::fixed << std::setprecision(1) << this->_nota << std::endl;
}

double Review::retornar_nota() {
    return this->_nota;
}
