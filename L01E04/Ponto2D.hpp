#ifndef PONTO2D_H
#define PONTO2D_H

#include <cmath>

typedef struct Ponto2D {
    double x, y;
    
    Ponto2D(double x=0, double y=0);

    double calcular_distancia(Ponto2D* ponto);

} Ponto2D;

#endif // PONTO2D_H
