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
	printf("Calculadora de m�dia aritm�tica\n");
	printf("-------------------------------\n\n");
	
	do{
		//Pede o pr�ximo n�mero do c�lculo da m�dia para o usu�rio, se for divis�vel por 2 ent�o � par
		printf("Digite o pr�ximo n�mero: ");
		scanf("%d", &proximoNumero);
		ehPar = proximoNumero % 2 == 0;
	
		// se for par e n�o for 0 (n�mero que finaliza o la�o), o n�mero � somado e contado na quantidade de n�meros digitados
		if(ehPar && proximoNumero != 0){
			somaDosNumeros = somaDosNumeros + proximoNumero;
			quantidadeNumerosDigitados++;	
		}
	
	} while (proximoNumero != 0);
	
	//c�lculo e apresenta��o da media.
	mediaAritmetica = somaDosNumeros/quantidadeNumerosDigitados;
	system("CLS");
	printf("===== resultado =====\n\n");
	printf("O resultado da media aritm�tica � %i\n\n", mediaAritmetica);

	system("PAUSE");	
	return 0;
}
