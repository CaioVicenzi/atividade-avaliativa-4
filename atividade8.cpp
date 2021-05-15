#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float alturaFelisberto = 1.10;
	float alturaAnacleto = 1.50;
	int quantidadeAnos = 0;	

	do{
		alturaAnacleto = alturaAnacleto + 0.02;
		alturaFelisberto = alturaFelisberto + 0.03;
		quantidadeAnos++;
	} while (alturaAnacleto > alturaFelisberto);
	
	printf("A quantidade de anos que demorou para o Felisberto ficar maior que o Anacleto é: %i\n\n", quantidadeAnos);
	
	system("PAUSE");	
	return 0;
}
