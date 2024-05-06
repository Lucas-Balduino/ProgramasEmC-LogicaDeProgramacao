#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//Exerc�cio 5

/*Sabendo que a 01 p� equivale a 0.3048m, fa�a um programa que mostre na tela a
convers�o de metros para p�s, de 0 a 100metros. Seu programa dever� exibir o
cabe�alho abaixo e a cada 20 valores exibidos na tela, seu programa dever� solicitar
ao usu�rio que digite a tecla ENTER pra continuar, ap�s isso dever� ser limpa a tela ,
exibido o cabe�alho e continuar o processamento at� o final do programa.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float metros, pes;
	int continuar;
	
	printf("		Convers�o Metros - P�s\n");
	printf("Metros						P�s\n");
	
	for (metros = 0; metros <= 100; metros++)
	{
		pes = 3.28084 * metros;
		if ((int)metros % 25 == 0)
		{
			printf("%.2f						%.2f\n", metros, pes);
			printf("Precione ENTER para continuar\n");
			continuar = getche();
			while (continuar != 13)
			{
				printf("\nOutra tecla foi precionada, tente novamente\n:");
				continuar = getche();
			}
			system("cls");	
		}
		printf("%.2f						%.2f\n", metros, pes);
	}

}
