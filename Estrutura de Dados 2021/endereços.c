#include <stdio.h>

char a;

void main(){
    a  = 5;
    printf("\n o endereço da variavel a é %p e \n vale %d",&a,a);
    
    //teste sem o &  no primeiro a pra ver oq acontece

    printf("\n o endereço da variavel a é %p e \n vale %d",a,a);

    return 0;
}