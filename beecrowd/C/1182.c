#include <stdio.h>

int main(){

    int i, j, coluna; 
    float m[12][12], soma=0, media=0, elemento;
    char operacao; 

    scanf("%d %c", &coluna, &operacao);

    for(i = 0; i < 12;  i++){

        for (j = 0; j < 12; j++){

            scanf("%f", &elemento);
            m[i][j] =  elemento;
        }
    }

    if (operacao == 'S'){

        j = coluna;
        while (j == coluna){

            for (i = 0; i < 12; i++){

                soma += m[i][j];
            }
            j++;
        }
        printf("%.1f\n", soma);

    }

    else {

        if (operacao = 'M'){

            j = coluna; 
            while (j == coluna){

                for (i = 0; i < 12; i++){

                    media += m[i][j];
                }
                j++;
            }
        }

        printf("%.1f\n", media/12);

    }

    return 0; 
}