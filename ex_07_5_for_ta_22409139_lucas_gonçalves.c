#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 7

/*Elabore um programa que gere a sequ�ncia dos n�meros inteiros, onde o usu�rio
dever� fornecer o valor inicial e o valor final dessa sequ�ncia.
*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	int valor1, valor2, i;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&valor1);
	
	printf("Digite o segundo valor:\n");
	scanf("%d",&valor2);
	
	if (valor1 < valor2)
	{
		printf("A sequencia de numeros entre %d e %d �\n", valor1, valor2);
		for (i = valor1; i <= valor2; i++)
		{
			printf("%d\n", i);
		}
	}
	
	if (valor1 > valor2)
	{
		printf("A sequencia de numeros entre %d e %d �\n", valor2, valor1);
		for (i = valor2; i <= valor1; i++)
		{
			printf("%d\n", i);
		}
	}
}
