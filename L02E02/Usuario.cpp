#include "Usuario.hpp"
#include "Review.hpp"
#include <iostream>
#include <iterator>

Usuario::Usuario(std::string login, std::string nome) {
    this->_login = login;
    this->_nome = nome;
}

void Usuario::associar_review(Review* review) {
    this->_reviews.push_back(review);
}

void Usuario::imprimir_info() {
    std::cout << this->_nome << "\tReviews: " << this->_reviews.size() << std::endl;
}

void Usuario::imprimir_reviews() {
    if (this->_reviews.size() == 0) {
        std::cout << "Usuario " << this->_nome << " nao possui reviews!" << std::endl;
    
    } else {
        std::cout << this->_nome << " Reviews: " << this->_reviews.size() << std::endl;

        for (Review* i : this->_reviews) {
            i->imprimir_dados();
        }
    }
}
