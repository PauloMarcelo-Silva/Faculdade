#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

system("cls");

for(i=0;i<strlen(palavra);i++){
lacuna[i]='-';
tam_palavra=strlen(palavra);
}

while(vida>0)
{
x=0;
cout << ("\n %s \n");
cout << ("\n digite uma letra: ");
cin >> (letra);

for(i=0;i<strlen(palavra);i++)
{
if(letra[0]==palavra[i])
{
lacuna[i]=palavra[i];
pontos++;
x++;
}
}
if(x==0) {
vida=vida-1;

if(vida==0) {
cout << ("\n\n VOCE FOI ENFORCADO!");
cout << ("\n A PALAVRA ERA:");
break;
}

else
printf("\n VOCE ERROU! RESTAM  VIDA(S)"); }

else{
if(pontos==tam_palavra) {
cout << ("\n\n VOCE GANHOU!");
cout << ("\n A PALAVRA E: ");
break;}

else {
cout <<("\n VOCE ACERTOU UMA LETRA!");
}
}
} 
cout <<("\n\n");
system("pause");
return 0; }