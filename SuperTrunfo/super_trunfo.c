#include <stdio.h>
int main () {
    /*terminal tem que ser:
    A
    A B (2 print)
    A B C (3 print)
    A B C D (4 print)
    A B C D E (5 print )*/
    
    for( int i = 0 ; i<5 ; i++){
        char letra = 'A';
        
        for(int j= 0; j<=i; j++ ){
        printf("%c", letra);
        ++letra;
        }
        printf("\n");
    }
     
  
}
