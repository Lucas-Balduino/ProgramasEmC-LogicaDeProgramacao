#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exec�cio 6

/*Fa�a um programa que some os algarismos de um n�mero do tipo unsigned long int
e ao final da execu��o exiba o n�mero digitado e o somat�rio de seus algarismos*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	unsigned long int i, numero, soma = 0;
	
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%lu",&numero);
	
	for (i = numero ; i > 0; i /= 10)
	{
		soma += i % 10;
	}
	
	printf("A soma dos algaritmos de %lu, � %lu", numero, soma);
}
