#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elaborar um programa C para computar a m�dia de N n�meros reais. Voc� receber� 
um n�mero inteiro e ir� realizar a somo dele com todos os seus antecessores at� 
chegar a zero.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float numero = 0,i = 0, quantidade = 0;
	
	printf("Insira um n�mero: \n");
	scanf("%f", &numero);
	
	quantidade = numero;
	
	for (i = numero; i >= 0; i--)
	{
		numero += i;
	}
	
	numero /= quantidade;
	
	printf("%.2f", numero);
}
