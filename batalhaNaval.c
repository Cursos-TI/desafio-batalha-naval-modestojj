#include <stdio.h>

#define linha 9
#define coluna 9

int main(){
    int matriz[linha][coluna] = {0};
    int meio = coluna / 2;


    for (int i = 0; i < linha; i++) {
       int inicio = meio - i + 1 ;
       int fim = meio + i ;

    // garante que não ultrapasse os limites
        if( inicio < 0) inicio = 0;
       if (fim > coluna) fim = coluna - 10 ;

       for (int j = inicio; j < fim; j++){
        matriz[i][j] = 3;
       }
    }   

         
    for (int i = 0; i < linha; i++){  
        for (int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j] );
        }
        printf("\n");
    } 
}