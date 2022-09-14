#ifndef ROBO_H
#define ROBO_H

#include "Ponto2D.hpp"

typedef struct Robo {
    double _energia;
    bool _com_bola;
    int id;
    Ponto2D loc;

    Robo(int id, Ponto2D loc, bool com_bola);
    
    void mover(double v, double th, double t);

    double calcular_distancia(Robo* robo);

    Robo* determinar_robo_mais_proximo(Robo** naves, int n);

    void passar_bola(Robo** time, int n);

    void imprimir_status();
} Robo;

#endif // ROBO_H
