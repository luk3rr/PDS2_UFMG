#include "Robo.hpp"

#include <iostream>
#include <cmath>

Robo::Robo(int id, Ponto2D loc, bool com_bola) {
    this->id = id;
    this->loc = loc;
    this->_com_bola = com_bola;
    this->_energia = 100;
}

void Robo::mover(double v, double th, double t) {
    this->loc.x += v * t * std::cos(th);
    this->loc.y += v * t * std::sin(th);
    this->_energia -= v*t;
}

double Robo::calcular_distancia(Robo* robo) {
    return this->loc.calcular_distancia(&robo->loc);
}

Robo* Robo::determinar_robo_mais_proximo(Robo** naves, int n) {
    Robo* roboMaisProximo = nullptr;
    if (naves[0]->id != id) roboMaisProximo = naves[0];
    else roboMaisProximo = naves[1];

    for (int i=0; i < n; i++) {
        if (this->calcular_distancia(naves[i]) < this->calcular_distancia(roboMaisProximo) && naves[i]->id != this->id) 
            roboMaisProximo = naves[i];
    }
    return roboMaisProximo;
}

void Robo::passar_bola(Robo** time, int n) {
    if (this->_com_bola == true) {
        this->_com_bola = false;
        this->determinar_robo_mais_proximo(time, n)->_com_bola = true;
    } else std::cout << "Estou sem a bola!" << std::endl;
}

void Robo::imprimir_status() {
    std::cout << this->id << "\t" << this->loc.x << "\t" << this->loc.y << "\t" << this->_com_bola << "\t" << this->_energia << std::endl;
}
