#ifndef LIVRO_H
#define LIVRO_H

#include "Produto.hpp"

#include <string>
#include <iomanip>
#include <iostream>

class Livro:public Produto {
    private:
        std::string _titulo, _autor;
        int _ano;

    public:
        Livro(int id, float valor, std::string titulo, std::string autor, int ano);

        void imprimir_info() override;
};

#endif // LIVRO_H
