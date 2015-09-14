#ifndef PENDULO_H
#define PENDULO_H
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct forza{
    float fx;
    float fy;
}forza;

class Pendulo
{
public:
    Pendulo();
    forza fuerza_alterna;
    const static double GRAVEDAD = 9.8;//metros entre segundos
    double longitud;//del péndulo
    double amortiguamiento;
    double fuerza_impulsadora;
    double frecuencia; //de la fuerza impulsadora

};

#endif // PENDULO_H