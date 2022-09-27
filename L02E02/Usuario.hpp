#ifndef USUARIO_H
#define USUARIO_H

#include "Review.hpp"

#include <string>
#include <iostream>
#include <iterator>
#include <vector>

class Usuario {
    private:
        std::string _login;
        std::string _nome;
        std::vector<Review*> _reviews;
    
    public:
        Usuario(std::string login, std::string nome);

        void associar_review(Review* review);

        void imprimir_info();

        void imprimir_reviews();

        std::string retornaNomeFilme(Review* filme);
};

#endif // USUARIO_H
