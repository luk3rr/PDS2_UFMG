#ifndef REVIEW_H
#define REVIEW_H

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

class Filme;

class Review {
    private:
        Filme* _filme;
        std::string nomeFilme;
        std::string _comentario;
        float _nota;

    public:       
        Review(Filme* filme, std::string comentario, float nota);

        void imprimir_dados();

        double retornar_nota();
};


#endif // REVIEW_H
