#ifndef ELETRONICO_H
#define ELETRONICO_H

#include "Produto.hpp"

#include <string>
#include <iostream>
#include <iomanip>

class Eletronico:public Produto {
    private:
        std::string _marca, _modelo;

    public:
        Eletronico(int id, float valor, std::string marca, std::string modelo);

        void imprimir_info() override;
};

#endif // ELETRONICO_H
