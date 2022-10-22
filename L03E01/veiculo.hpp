#ifndef VEICULO
#define VEICULO

#include <string>
#include <iostream>

class Veiculo {
    private:
        int _id;
        std::string _subtipo;
        static int _nextId;

    protected:
        int _veloMax, _nPassageiros;

    public:
        Veiculo(std::string subtipo, int veloMax, int nPassageiros);
        
        virtual ~Veiculo();

        int getId();
        
        virtual int estimaPreco() = 0;

        virtual void printInfo();

};

#endif // !VEICULO
