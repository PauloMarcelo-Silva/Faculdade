#include <iostream>

#include <math.h>

using namespace std;

int main (void){
    //variaveis
    float  tempo,velocidade;

    //entrada
    cout << "digite a velocidade q o seu carro estava: ";
    cin >> velocidade;

    cout << "digite o tempo gasto na sua viagem: ";
    cin >> tempo;

    //processamento
    float distancia,litros,media,percorrida;

    cout << "digite a distancia entre o seu ponto inicial da viagem e seu ponto final da viagem em km: ";
    cin >> percorrida;

    media = percorrida / tempo;

    distancia = media * tempo;

    litros = distancia / 12;

    //saida
   cout << "velocidade media = " << media * 100 << endl; 
   cout << "tempo gasto na viagem = " << tempo << endl; 
   cout << "distancia percorrida = " << distancia << endl; 
   cout << "litros gastos = " << litros << endl; 

}