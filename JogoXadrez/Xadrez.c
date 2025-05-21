#include <stdio.h>
int main() {
    /*saida pede : 
    torre 5 casas p direita
    rainha 8 casas para equerda 
    bispo 5 casas para cima,direita
    ex de saida: 
    torre:     
    Direita 
    Direita 
    Direita 
    Direita 
    Direita
     */

    char *torre [10] , *rainha [10], *bispo [20];
//movimentaçao da torre 
    printf("TORRE: \n");
    for (int i = 0; i<5; i ++){
        
        printf("DIREITA\n");

    }
    printf ("\n");
//movimentaçao do bispo 
    printf("BISPO: \n");
    for (int i = 0; i<5; i++){
        printf("CIMA-DIREITA\n");
    }
    printf ("\n");
//movimentaçao da rainha 
    printf("RAINHA: \n");
    for (int i = 0; i< 8; i++){
        printf("DIREITA\n");
    }






    return 0;
}