#include <iostream>

#include <math.h>

using namespace std;

int main (void){
    //variaveis
    int a,b,c;

    //entrada
    cout << "digite o valor de a = ";
    cin >> a;

    cout << "digite o valor de b = ";
    cin >> b;

    //processamentos
    c = a;
    
    a = b;

    b = c;

    //saida
    cout << "o valor de B é = " << a << endl;
    cout << "o valor de A é = " << b << endl;


}