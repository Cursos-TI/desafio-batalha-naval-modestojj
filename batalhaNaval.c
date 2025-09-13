#include <stdio.h>

#define linhaNaval 11
#define colunaNaval 11

int main(){
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