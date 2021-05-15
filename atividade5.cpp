#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("--------------------------------------\n");
	printf("  Probabilidade de 2 dados somarem 7  \n");
	printf("--------------------------------------\n\n");
	
	int dado1;
	int dado2;
	int numeroPossibilidades;
	
	// Para cada valor possível do primeiro dado
	for(dado1 = 1; dado1<7;dado1++){
		// Para cada valor possível do segundo dado com cada valor possível do primeiro dado
		for(dado2 = 1; dado2<7;dado2++){
			if(dado1 + dado2 == 7) {
				printf("Se um dos dados for %i e o outro for %i, a soma será 7\n", dado1, dado2);	
				numeroPossibilidades++;
			}
		}
		
	}
	printf("\n\nO número de possibilidades é: %i", numeroPossibilidades);
	printf("\n\n");
	
	system("PAUSE");	
	return 0;
}
