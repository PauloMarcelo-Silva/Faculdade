#include <iostream>
#include <math.h>

using namespace std;

int main(void){
//variaveis
    float quilowatt,minimo;
//entradaas
    cout << "digite o valor do salario minimo: ";
    cin >> minimo ;

    cout << "\n digite o valor de quislowatts gasta na sua residencia: ";
    cin >> quilowatt;

//processamentos
    float valor,valorq,valordesc;
    valor = (minimo * 0.20);

    valorq = quilowatt * valor;

    valordesc = valorq - (valorq * 0.15);

//saida

    cout << "o valor em reais de cada quilowatt é R$" << valor << endl;

    cout << "o valor a ser pago por essa residencia é de R$ " << valorq << endl;

    cout << "o valor a ser pago pela residendicia tendo 15% de desconto é igual a R$ " << valordesc << endl;








}