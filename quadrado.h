#ifndef QUADRADO_H
#define QUADRADO_H




class Quadrado(){

 private:
     float lado;

 public :
   Quadrado(); //padrão
   ~Quadrado(); //destrutor
    Quadrado(lado);

    //GETTERS E SETTERS
    float getLado();
    void  setLado(float);
    float operacoes();











};



#endif // TRIANGULO_H
