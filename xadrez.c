#include <stdio.h>

void movertorre (int casas){
    while(casas<=5){
        printf("Movendo torre para direita\n");
    casas ++;
    }
}


void moverrainha(int casas){
    for(casas = 1; casas <= 8; casas++){
        printf("Movendo rainha para esquerda\n");
    }
}
// bispo com for mais complexo
void moverbispo(int casas) {
    do {
        for (int i = 0; i < 2; i++) {
            printf("Movendo para cima, direita!\n");
        }
        casas++;
    } while (casas < 5);
}


int main(){
    int torre =0, rainha = 0, bispo =0;
    int movcompleto =1 ;    
    printf("==================================\n"); 
    printf("MOVIMENTO TORRE:\n");
    movertorre(torre);
    printf("==================================\n");
    printf("MOVIMENTO RAINHA\n");
    moverrainha(rainha);
    printf("==================================\n");
    printf("MOVIMENTO BISPO\n");
    moverbispo(bispo);
    printf("==================================\n");
    //exemplo com cavalo estruturas de repetição aninhadas
    printf("MOVIMENTO CAVALO\n");
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