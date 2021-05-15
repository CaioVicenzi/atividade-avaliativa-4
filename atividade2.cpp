#include<stdio.h>
#include <string.h> 
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, signoDoMes;
	char signo[20];
		
	printf("Digite um dia: ");
	scanf("%i", &dia);
	if(dia > 31){
		printf("Dia inválido");
		return 0;
	}
	
	printf("Digite um mes: ");
	scanf("%i", &mes);
	if(mes > 12) {
		printf("Mês inválido");
		return 0;
	}
	
	if(dia <= 19) signoDoMes = 1;
		else signoDoMes = 2;
		
	if(signoDoMes == 1){
		switch(mes){
			case 1: strcpy(signo, "capricórnio"); break;
			case 2: strcpy(signo, "aquário"); break;
			case 3: strcpy(signo, "peixes"); break;
			case 4: strcpy(signo, "áries"); break;
			case 5: strcpy(signo, "touro"); break;
			case 6: strcpy(signo, "gêmeos"); break;
			case 7: strcpy(signo, "câncer"); break;
			case 8: strcpy(signo, "leão"); break;
			case 9: strcpy(signo, "virgem"); break;
			case 10: strcpy(signo, "libra"); break;
			case 11: strcpy(signo, "escorpeão"); break;
			case 12: strcpy(signo, "sagitário"); break;
		}
	} else {
		switch(mes){
			case 1: strcpy(signo, "aquário"); break;
			case 2: strcpy(signo, "peixes"); break;
			case 3: strcpy(signo, "áries"); break;
			case 4: strcpy(signo, "touro"); break;
			case 5: strcpy(signo, "gêmeos"); break;
			case 6: strcpy(signo, "câncer"); break;
			case 7: strcpy(signo, "leão"); break;
			case 8: strcpy(signo, "virgem"); break;
			case 9: strcpy(signo, "libra"); break;
			case 10: strcpy(signo, "escorpeão"); break;
			case 11: strcpy(signo, "sagitário"); break;
			case 12: strcpy(signo, "capricórnio"); break;
		}
	}
	
	printf("O seu signo é: %s", signo);
}
