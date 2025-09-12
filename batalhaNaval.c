#include <stdio.h>

int main(){
    char linha[10] = {'A', 'B','C','D',
'E', 'F', 'G', 'H', 'I', 'J'}; 
    char matriz[10][10];
    int i ;
    for (i = 0; i <= 9; i++)
    {
        printf("  ");
        printf("   %c", linha[i]);  
        
    }
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        
        printf("%2d ", i );
       for (int j = 1; j <= 10; j++)
       {
        printf("  %d   ", matriz[i][j] = 0);
       }
       printf("\n");
       
    }
    
    
}