#include <stdio.h>

int main(){
    int torre =0, rainha = 0, bispo =0;
    printf("==================================\n");
    //exemplo com while:
    while(torre<=5){
        printf("Movendo torre para direita\n");
    torre ++;
    }
    printf("==================================\n");
    //exemplo com for:
    for(rainha = 1; rainha <= 8; rainha++){
        printf("Movendo rainha para esquerda\n");
    }
    printf("==================================\n");
    //exemplo com do-while:
    do{
        printf("Movendo para cima, direita!\n");
        bispo++;
    }while (bispo < 5);
    return 0;
}