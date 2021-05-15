#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeroDigitado;
	int numeroImaginado;
	int numeroTentativas = 0;
	
	printf("Digite o número imaginado: ");
	scanf("%i", &numeroImaginado);
	system("CLS");
	
	do{
		printf("Digite um chute: ");
		scanf("%i", &numeroDigitado);
		
		if(numeroDigitado > numeroImaginado) printf("O número que você chutou é muito grande!\n\n");
		if(numeroDigitado < numeroImaginado) printf("O número que você chutou é muito pequeno!\n\n");
		
		numeroTentativas++;
	} while(numeroDigitado != numeroImaginado);
	
	printf("Você acertou!!!\n");
	printf("Foram realizados %i tentativas\n\n", numeroTentativas);
	
	system("PAUSE");	
	return 0;
}
