#include <iostream>
#include <list>

#include "caminhao.hpp"
#include "caminhao_autonomo.hpp"
#include "veiculo.hpp"

void printList(std::list<Veiculo*> l) {
    for (Veiculo* v : l) {
        v->printInfo();
    }
}

void rmId(std::list<Veiculo*> &l, int id) {
    for (Veiculo* v : l) {
        if (v->getId() == id) {
            l.remove(v);
            delete v;
            break;
        }
    }
}

int main() {
    std::list<Veiculo*> veiculos;
    std::string comando, fabricante;
    int velocidade, passageiros, carga, aux;

    while (std::cin >> comando) {
        if (comando == "add_c") {
            std::cin >> velocidade >> passageiros >> carga;
            veiculos.push_back(new Caminhao(velocidade, passageiros, carga));
        
        } else if (comando == "add_ca") {
            std::cin >> velocidade >> passageiros >> carga >> fabricante;
            veiculos.push_back(new CaminhaoAutonomo(velocidade, passageiros, carga, fabricante));

        } else if (comando == "rm") {
            std::cin >> aux;
            rmId(veiculos, aux);

        } else if (comando == "print") {
            printList(veiculos);

        }
    }
    
    return 0;
}
