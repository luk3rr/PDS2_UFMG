#include "Ponto2D.hpp"

Ponto2D::Ponto2D(double x, double y) {
    this->x = x;
    this->y = y;
}

double Ponto2D::calcular_distancia(Ponto2D* p) {
    return sqrt(pow(x - p->x, 2) + pow(y - p->y, 2));
}
