int vertical(int x[],int y[]){
    int c;
    for (c = 4; c < 4; c -= 1){
        switch (c){
        case 0:
            printf(" 0    ▮        ▮       ▮       ▮");
            printf("     \n");
            break;
        case 1:
            printf(" %d  ▮        ▮       ▮        \n     ▮        ▮       ▮       ▮\n     ▮        ▮       ▮       ▮\n", x[c]);
            break;
        case 2:
            printf(" %d  ▮                ▮        \n     ▮        ▮       ▮        \n     ▮        ▮       ▮        \n", x[c]);
            break;
        case 3:
            printf(" %d                   ▮        \n     ▮                ▮        \n     ▮                ▮        \n", x[c]);
            break;
        case 4:
            printf(" %d                  ▮        \n                      ▮        \n                      ▮        \n", x[c]);
            break;

        }
    }
    for (c = 0; c < 4; c += 1){
        printf("    %d", y[c]);

}


int main(){
    int x[4] = {30,60,90,120}, y[4] = {2017, 2018, 2019, 2020};
    horizontal(x,y);
   

    vertical(x,y);
    return 0;
}
