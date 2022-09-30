#ifndef BRINQUEDO_H
#define BRINQUEDO_H

#include "Produto.hpp"

#include <string>
#include <iostream>
#include <iomanip>

class Brinquedo:public Produto {
    private:
        std::string _nome;
        int _idadeMinima;

    public:
        Brinquedo(int id, float valor, std::string nome, int idadeMinima);

        void imprimir_info() override;
};

#endif // BRINQUEDO_H
