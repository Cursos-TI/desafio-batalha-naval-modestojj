#include <stdio.h>

#define linha 9
#define coluna 9

int main(){
int matriz[linha][coluna] = {0};
int meio = coluna / 2;


        
 
    //formato X
     for(int i = 0;i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(i == j || i + j == coluna - 1){//i == j desenha a diagonal principal
                matriz[i][j] = 3;//i + j == coluna - 1 desenha a diagonal secundária
            }
        }
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 
}