#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Exerc�cio 8

/*Prepare um programa para gerar o n�mero H, ou seja, calcular o valor de H.
Sendo H = 1 + 1 + 1 + 1 + . . . + 1. O n�mero �n� ser� fornecido pelo usu�rio.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float h;
	float n,i;
	
	printf("Insira um numero inteiro:\n ");
	scanf("%f",&n);
	
	for (i = 1; i <= n; i++)
	{
		h += 1 / i;
		printf("%.2f\n", h);
	}
	
	printf("O valor de h � %.2f", h);
}
