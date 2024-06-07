

#ifndef PARADIGMAS_TRIANGULO_RETANGULO_H
#define PARADIGMAS_TRIANGULO_RETANGULO_H

#include <cmath>
#include "triangulo.h"

class TrianguloRetangulo : public Triangulo{
private:
protected:
public:

    bool trianguloValido2();
    float area2();
    float hipotenusa();
    float cateto(float);

    bool toleranciaOK(double v1, double v2);
};


#endif //PARADIGMAS_TRIANGULO_RETANGULO_H
