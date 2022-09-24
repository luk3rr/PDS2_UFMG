#include "Filme.hpp"

#include <iostream>
#include <iomanip>
#include <string>

Filme::Filme(int id, std::string nome, std::string genero, int duracao) {
    this->_id = id;
    this->_nome = nome;
    this->_genero = genero;
    this->_duracao = duracao;
}

Review* Filme::adicionar_review(std::string comentario, float nota) {
    Review* novoReview = new Review(this, comentario, nota);
    this->_reviews.push_back(*novoReview);
    return novoReview;
}

void Filme::imprimir_nota_consolidada() {
    double sum = 0;
    for (Review i : this->_reviews) {
        sum += i.retornar_nota();
    }
    
    if (this->_reviews.empty()) {
        std::cout << this->_nome << "\tReviews: " << this->_reviews.size() << 
            "\tNota media: " << "0.0" << std::endl;
    
    } else {
        std::cout << this->_nome << "\tReviews: " << this->_reviews.size();
        std::cout << "\tNota media: " << std::fixed << std::setprecision(1) << 
            sum/this->_reviews.size() << std::endl;

    }
}

std::string Filme::retornaNomeFilme() {
    return this->_nome;
}
