#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main (void){
    int x,y,z,s,contador;
    x = 37;
    y = 38;
    z = 1;
    s = 0;
    contador = 0;
    for (int i;i < 37;i++){
        s = (x * y) / z;
        s = s + contador;
        x --;
        y --;
        z ++;
    }
    cout << "o valor de s é igual a : " << contador << "\n";

}