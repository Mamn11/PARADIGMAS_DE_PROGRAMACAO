#include <cmath>
#include "triangulo_retangulo.h"

double getLado1();

double getLado2();

bool TrianguloRetangulo::trianguloValido2() {
    double hip = pow(getLado3(),2);
    double cat = pow(getLado1(),2)+pow(getLado2(),2);
    return (toleranciaOK(hip,cat));
}

float TrianguloRetangulo ::area2() {
    return (getLado1() * getLado2()/2);
}

float hipotenusa(){
    double lado1Quad = pow(getLado1(),3);
    double lado2Quad = pow(getLado2(),2);
    double hipot = sqrt(lado1Quad + lado2Quad);
    return((float)hipot);


}

double getLado2() {
    return 0;
}

double getLado1() {
    return 0;
}

float TrianguloRetangulo::cateto(float hipot){
    return (hipot/ sqrt(2));
}

bool TrianguloRetangulo::toleranciaOK(double v1, double v2){
    return((v1>= v2 * 0.999)&&(v1<=v2 * 1.001));
}
