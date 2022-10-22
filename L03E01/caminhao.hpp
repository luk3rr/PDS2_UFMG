#ifndef CAMINHAO
#define CAMINHAO

#include "veiculo.hpp"
#include <iostream>

class Caminhao : public Veiculo {
    protected:
        int _cargaMax;

    public:
        Caminhao(std::string subtipo, int veloMax, int nPassageiros, int cargaMax);

        Caminhao(int veloMax, int nPassageiros, int cargaMax);

        virtual ~Caminhao();

        int estimaPreco() override;

        void printInfo() override;
};

#endif // !CAMINHAO
