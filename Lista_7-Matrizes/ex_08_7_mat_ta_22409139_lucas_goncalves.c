#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 8

/* Crie um Algoritmo para ler 25 nomes digitados pelo usu�rio e imprimir o nome caso este
seja 'maria', informando que posi��o (linha) este se encontra dentro da matriz.
a) Converta todos os caracteres digitados para mai�sculas sem utilizar uma fun��o
para isso. Observe a tabela ASCII.
b) Conte o total de caracteres convertidos para mai�sculos e apresente o valor no final.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz1 [5][5];
    int i, j;
    
    printf("Digite 25 nomes \n");
    
	for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("A matriz com os nomes fica:\n");
            
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d]    ", resultado[i][j]);
        }
       printf("\n");
    }
    
}
