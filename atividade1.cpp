#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano, mes, dia;
	bool anoEhBissexto = false; 
	bool mesTem31Dias = false;
	bool dataEhValida = false;
	
	printf("------------------------------\n");
	printf("Programa para validar uma data\n");
	printf("------------------------------\n");
	
	
	printf("Digite o ano: ");
	scanf("%i", &ano);
	anoEhBissexto = ano%4 == 0;
	
	printf("Digite o m�s: ");
	scanf("%i", &mes);
	mesTem31Dias = (mes%2 == 0) && (mes != 2);
	
	printf("Digite o dia: ");
	scanf("%i", &dia);
	
	if(mes > 12){
		printf("M�s inv�lido!");
		return 0;
	}
	
	if(dia > 31){
		printf("Dia inv�lido");
		return 0;
	}
	
	if(mes == 2){ 
		if(dia > 29 || dia == 29 && !anoEhBissexto) {
			printf("Data inv�lida");
			return 0;
		} else printf("Data v�lida");
	} else {
		if(dia < 31 || mesTem31Dias) {
			printf("Data v�lida!");
		} else {
			printf("Data inv�lida");
			return 0;
		}
	}
	
	return 1;
}
