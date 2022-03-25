#include <stdio.h>
int main(void){

int x,y,a,b,de,no;
    printf("digite uma fracao: ");
    scanf("%d/%d",&x,&y);

    printf("digite uma fracao: ");
    scanf("%d/%d",&a,&b);

    no = x + a;

    de = b + y;

    printf("o valor da soma das fracoes: %d/%d",no,de);

    return 0;

}
