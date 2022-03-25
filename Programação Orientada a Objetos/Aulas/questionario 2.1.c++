#include <iostream>

#include <math.h>


int main(){
    //variaveis
    int altura,y,x,c,a,media,i;
    int maior,menor;
    int m,f;
    int homens; 

    char sexo;
    
    //entrada
    std::cout << "seja bem vindo" ;
    


    //processamento
    for(i = 0;i < 3;i++)
    {
    std::cout << "digite seu sexo(m para masculino,f para feminino):";
    std::cin >> sexo;
    std::cout << "digite sua altura(em metros):";
    std::cin >> altura;
    
    if(sexo == f){
        y = altura;
        x ++;
        a = y + altura;   
    }
    else if(sexo == m){
        homens ++;
    }         
    }
    //media
    media = a / x;
    std::cout << "a media de altura entre as mulheres é: " << media << "\n";
    
    //altura maxima e minima
    maior = altura;
    if(maior > maior || maior == maior){
        maior = altura;
        std::cout << "o maior valor de m é: " << maior << "\n";
        }
    else if(maior < maior){
            menor = maior;
        }
    std::cout << "o menor valor de menor é: " << menor << "\n";;

    //numero de homens
    std::cout << "o numero de homens é: " << homens << "\n";

}
