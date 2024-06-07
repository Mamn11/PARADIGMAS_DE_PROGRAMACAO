#ifndef  TRIANGULO_H

#define TRIANGULO_H

class Triangulo{
    float lado1;
    float lado2;
    float lado3;

    static int quantidade;

public:
    Triangulo();
    Triangulo(float ,float,float );
    ~Triangulo();
    float getLado1();
    void setLado1(float);
    float getLado2();
    void setLado2(float);
    float getLado3();
    void setLado3(float);

    static int getQuantidade();
    static void setQuantidade(int);
    float perimetro();
    float area();


};
#endif