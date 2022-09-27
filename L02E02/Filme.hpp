#ifndef FILME_H
#define FILME_H

#include "Review.hpp"

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

class Filme {
    private:
        int _id;
        std::string _nome;
        std::string _genero;
        int _duracao;
        std::vector<Review*> _reviews;

    public:
        Filme(int id, std::string nome, std::string genero, int duracao);

        ~Filme();

        Review* adicionar_review(std::string comentario, float nota);

        void imprimir_nota_consolidada();

        std::string retornaNomeFilme();
};

#endif // FILME_H
