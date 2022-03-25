#include <stdio.h>

int a[3] = {34,5,10};

void main(){
    printf("\n o endereço no primeiro quadrante é %p e \n vale %d",&a[0],a[0]);

    printf("\n o endereço da no segundo quadrante é %p e \n vale %d",&a[1],a[1]); 

    printf("\n o endereço da no terceiro quadrante é %p e \n vale %d",&a[2],a[2]);

    return 0;
}