#ifndef CAMINHAO_AUTONOMO
#define CAMINHAO_AUTONOMO

#include "caminhao.hpp"
#include <iostream>

class CaminhaoAutonomo : public Caminhao {
    protected:
        std::string _fabricante;

    public:
        CaminhaoAutonomo(int veloMax, int nPassageiros, int cargaMax, std::string fabricante);
        
        virtual ~CaminhaoAutonomo();
        
        int estimaPreco() override;

        void printInfo() override;
};

#endif // !CAMINHAO_AUTONOMO
