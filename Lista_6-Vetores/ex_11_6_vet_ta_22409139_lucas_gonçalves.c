#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 11

/*Elabore um programa para limitar a quantidade m�xima de caracteres que poderemos
digitar para uma entrada alfanum�rica, ou seja, vari�vel string. O usu�rio fornecer�
uma palavra ou uma senten�a que ser� finalizada quando ele digitar a tecla < enter >
ou quando chegar ao limite m�ximo de sessenta caracteres digitados. No final mostre
a quantidade de caracteres efetivamente digitados.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	char palavra[60];
	
	printf("Digite frase de ate 60 caracteres\n");
	gets(palavra);
	
	i = strlen(palavra);
	
	if (i > 60){
		printf("Limite de caracteres atingido\n");
		printf("60 caracteres digitados");
	}
	else{
		printf("%d caracteres digitados", i);
	}
}
