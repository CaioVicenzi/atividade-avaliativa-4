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
	
	printf("Digite o mês: ");
	scanf("%i", &mes);
	mesTem31Dias = (mes%2 == 0) && (mes != 2);
	
	printf("Digite o dia: ");
	scanf("%i", &dia);
	
	if(mes > 12){
		printf("Mês inválido!");
		return 0;
	}
	
	if(dia > 31){
		printf("Dia inválido");
		return 0;
	}
	
	if(mes == 2){ 
		if(dia > 29 || dia == 29 && !anoEhBissexto) {
			printf("Data inválida");
			return 0;
		} else printf("Data válida");
	} else {
		if(dia < 31 || mesTem31Dias) {
			printf("Data válida!");
		} else {
			printf("Data inválida");
			return 0;
		}
	}
	
	return 1;
}
