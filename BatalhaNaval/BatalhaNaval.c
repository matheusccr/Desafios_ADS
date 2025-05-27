#include <stdio.h>
#define linhas 10
#define colunas 10 

int main() {
    /*terminal: matriz 10x10 feito por 0 (representa agua)
    1 navil da vertical e um na horinzontal (representado por 3 
    navio horinzontal linha 3 coluna 3 4 5 
    navio vertical coluna 7(h) linha 7 8 9 )
    loop para posicionar o navio e loop aninhado p imprimir o tabuleiro */

    int tabuleiro [linhas][colunas];
    char letra = 'A'; //parte de cima do tabuleiro (ABCDEFGHIJ)
    

    
    //inicializaçao do tabuleiro com 0 representando agua 
     for(int i= 0 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            tabuleiro [i][j]=0;
        }

     }

//INICIALIZAÇAO DOS NAVIOS
    // navio na horinzontal tabulerio [2][2,3,4]
     for(int i= 0 ; i<linhas ; i++){
        if(i==8){
            for (int j= 0; j<3 ; j++){
            tabuleiro [i][j]=3;
             }
        }

     }  

    // navio na vertical coluna 7(h) linha 7 8 9 )
     for(int j= 0 ; j<colunas; j++){
        if(j==7){
            for (int i= 6; i<9 ; i++){
            tabuleiro [i][j]=3;
             }
        }

     }  

    // navio na diagonal 
        //diagonal principal (i=j)
     for(int i= 1 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            if (i==j){
                tabuleiro [i][j]=3;
            }
        }
        if (i==3) break;

     }
        //diagonal secundaria (i+j==9)
      for(int i = 0; i<linhas; i++){
        for(int j= 0; j<colunas; j++){
            if(i+j == 9){
                tabuleiro [i][j]=3;
            }
        }
          if(i==2) break;

      }
    //formas geometricas
    
      //triangulo (base com 5 casas).
        for(int i=4 ; i < 7 ; i++){
            for(int j=0 ; j<5 ; j++){
                if( (j<=i-2) && (i+j > 5)){
                    tabuleiro [i][j] = 5;
                }
            }
        }

   
   

//IMPRESSÂO DO TABULEIRO 
    //imprimir a parte de cima do tabuleiro (A-J)
     for (int j=0 ; j<linhas ; j++){
         printf(" %c", letra);
         letra++ ;
     }
     printf("\n");

    //imprimir o tabuleiro 
    for (int i= 0 ; i<linhas ; i++){
        
        int a = i +1;  //variavel para imprimir a numeraçao na coluna esquerda
        printf("%d ",a);
       
        for (int j=0 ; j<colunas ; j++){

             printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }





 return 0;
}