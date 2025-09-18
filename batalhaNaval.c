#include <stdio.h>

#define linha 9
#define coluna 9

int main(){
int matriz[linha][coluna] = {0};
int meio = coluna / 2;

 // losango 
    //cima
    for(int i  = 0; i < linha / 2 + 1; i++){ //Vai de i = 0 até o meio (linha/2)
        int inicio = meio - i; //Em cada linha, define a "largura" do losango (inicio até fim).
        int fim = meio + i;


        for(int j = inicio; j <= fim; j++){
            matriz[i][j] = 3;//Preenche com 3 (seu símbolo escolhido).
        }
    }

    //baixo
    for(int i = linha / 2 + 1; i < linha; i++){ //Vai do meio + (1) até a última linha
        int distancia = linha - i - 1; //Calcula distancia como a "quantidade de linhas até o fim".
        int inicio = meio - distancia; //Define inicio e fim espelhados.
        int fim = meio + distancia;   //Define inicio e fim espelhados.
        
        for(int j = inicio; j <= fim; j++){
            matriz[i][j] = 3;
        }
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]); //Imprime a matriz inteira (com 0s onde não tem losango e 3s no losango).
        }
        printf("\n");
        
    }
}