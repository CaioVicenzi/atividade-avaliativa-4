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
		printf("Dia inv�lido");
		return 0;
	}
	
	printf("Digite um mes: ");
	scanf("%i", &mes);
	if(mes > 12) {
		printf("M�s inv�lido");
		return 0;
	}
	
	if(dia <= 19) signoDoMes = 1;
		else signoDoMes = 2;
		
	if(signoDoMes == 1){
		switch(mes){
			case 1: strcpy(signo, "capric�rnio"); break;
			case 2: strcpy(signo, "aqu�rio"); break;
			case 3: strcpy(signo, "peixes"); break;
			case 4: strcpy(signo, "�ries"); break;
			case 5: strcpy(signo, "touro"); break;
			case 6: strcpy(signo, "g�meos"); break;
			case 7: strcpy(signo, "c�ncer"); break;
			case 8: strcpy(signo, "le�o"); break;
			case 9: strcpy(signo, "virgem"); break;
			case 10: strcpy(signo, "libra"); break;
			case 11: strcpy(signo, "escorpe�o"); break;
			case 12: strcpy(signo, "sagit�rio"); break;
		}
	} else {
		switch(mes){
			case 1: strcpy(signo, "aqu�rio"); break;
			case 2: strcpy(signo, "peixes"); break;
			case 3: strcpy(signo, "�ries"); break;
			case 4: strcpy(signo, "touro"); break;
			case 5: strcpy(signo, "g�meos"); break;
			case 6: strcpy(signo, "c�ncer"); break;
			case 7: strcpy(signo, "le�o"); break;
			case 8: strcpy(signo, "virgem"); break;
			case 9: strcpy(signo, "libra"); break;
			case 10: strcpy(signo, "escorpe�o"); break;
			case 11: strcpy(signo, "sagit�rio"); break;
			case 12: strcpy(signo, "capric�rnio"); break;
		}
	}
	
	printf("O seu signo �: %s", signo);
}
