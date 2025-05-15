#include <stdio.h>

int main(){
    int torre =0, rainha = 0, bispo =0;
    int movcompleto =1 ;    
    printf("==================================\n");
    //exemplo com while:
    printf("MOVIMENTO TORRE:");
    while(torre<=5){
        printf("Movendo torre para direita\n");
    torre ++;
    }
    printf("==================================\n");
    //exemplo com for:
    printf("MOVIMENTO RAINHA");
    for(rainha = 1; rainha <= 8; rainha++){
        printf("Movendo rainha para esquerda\n");
    }
    printf("==================================\n");
    //exemplo com do-while:
    printf("MOVIMENTO BISPO");
    do{
        printf("Movendo para cima, direita!\n");
        bispo++;
    }while (bispo < 5);
    printf("==================================\n");
    //exemplo com cavalo estruturas de repetição aninhadas
    printf("MOVIMENTO CAVALO");
    while (movcompleto --)
    {
        for (int cavalo = 1; cavalo <= 3 ; cavalo ++)
        {
            printf("Movendo para baixo\n");
        }
    printf("Finalizou na esquerda\n");
    }
    return 0;
}