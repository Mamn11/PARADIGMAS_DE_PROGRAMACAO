#include <iostream> // Biblioteca que implementam recursos de entrada/saída baseados em fluxo. Utiliza métodos de classes e funções compradas na biblioteca padrão C++
#include <stdio.h> // Cabeçalho padrão de entrada/saída
#include "triangulo.h" // "Chama" o arquivo header da classe triangulo
#include "triangulo_retangulo.h"
using namespace std; // Permite usar nomes para objetos e variáveis utilizando o padrão organizando em grupos lógicos e evita conflitos de nomes quando são usadas se-múltiplas bibliotecas.

float* entraLados();
void imprimeTriangulo(Triangulo* t);

Triangulo* tris; // Cria a instância em memória do objeto Triangulo
TrianguloRetangulo* tri;

int main(){
    // Alternativa 1
    tris = new Triangulo(); // Primeiro construtor
    imprimeTriangulo(tris); // Exibe os dados da instância Triangulo
    delete tris; // Destrói o objeto em memória

    // Alternativa 2
    float* lados = entraLados();
    tris = new Triangulo(lados[0], lados[1], lados[2]); // Segundo construtor
    imprimeTriangulo(tris); // Exibe os dados da instância Triângula
    delete tris; /// Destrói o objeto em memória

    tri = new TrianguloRetangulo;

    cout << "\n\n FIM DE EXECUÇÃO\n\n";
    return(0);
}

/**
 * Entrada, via teclado, dos valores dos lados
 * @return
 */
float* entraLados()
{
    float* lados = new float[3];
    cout << "Lado 1 = ";
    scanf("%f", &lados[0]);
    cout << "Lado 2 = ";
    scanf("%f", &lados[1]);
    cout << "Lado 3 = ";
    scanf("%f", &lados[2]);
    return lados;
}

/*
 * Imprime os dados de um triangulo.
 * @param t Objeto Triangulo
 */
void imprimeTriangulo(Triangulo* t)
{
    if(t == NULL){
        cout << "\n\nERRO: OBJETO NULO!";
        return;
    }

    cout << "\n\nLado1 = " << t->getLado1();
    cout << "\nLado2 = " << t->getLado2();
    cout << "\nLado3 = " << t->getLado3();
    cout << "\nPerimetro = "<<t->perimetro();
    cout <<" \nArea = "<<t->area();
}
