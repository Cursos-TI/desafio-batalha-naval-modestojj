#include <stdio.h>

#define linhaNaval 11
#define colunaNaval 11

int main(){
    //aqui aparece as letras em cima de A a J
    char linha[10] = {'A', 'B','C','D',
    'E', 'F', 'G', 'H', 'I', 'J'}; 
    int matriz[linhaNaval][colunaNaval];
    for (int i = 0; i <= 9; i++)
    {
        printf("  ");
        printf("   %c", linha[i]);  
        
    }
    printf("\n");
//==================================================

    //logica para numerar de 1 a 10 com os 0 ao lado com 4 casas de navios na diagonal 
    for (int i = 1; i < linhaNaval; i++){  
        for (int j = 1; j < colunaNaval; j++){
        matriz[i][j] = 0;
        }
    }

    for(int i  = 1, j = 10; i <= 4; i++, j--){ //i linha 1 e J coluna 10 com --
        matriz[i][j] = 3;
        
    }

    for (int i = 1; i < linhaNaval; i++){
        printf("%2d ", i);
        for (int j = 1; j < colunaNaval; j++)
        {
            printf("  %d   ", matriz[i][j]);
        }
        printf("\n");
        
    }
    

}