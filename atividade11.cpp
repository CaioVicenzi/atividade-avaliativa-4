#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int proximoNumero;
	int quantidadeNumerosDigitados = 0;
	int somaDosNumeros = 0;
	int mediaAritmetica;
	bool ehPar;
	
	printf("-------------------------------\n");
	printf("Calculadora de média aritmética\n");
	printf("-------------------------------\n\n");
	
	do{
		//Pede o próximo número do cálculo da média para o usuário, se for divisível por 2 então é par
		printf("Digite o próximo número: ");
		scanf("%d", &proximoNumero);
		ehPar = proximoNumero % 2 == 0;
	
		// se for par e não for 0 (número que finaliza o laço), o número é somado e contado na quantidade de números digitados
		if(ehPar && proximoNumero != 0){
			somaDosNumeros = somaDosNumeros + proximoNumero;
			quantidadeNumerosDigitados++;	
		}
	
	} while (proximoNumero != 0);
	
	//cálculo e apresentação da media.
	mediaAritmetica = somaDosNumeros/quantidadeNumerosDigitados;
	system("CLS");
	printf("===== resultado =====\n\n");
	printf("O resultado da media aritmética é %i\n\n", mediaAritmetica);

	system("PAUSE");	
	return 0;
}
