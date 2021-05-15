#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("-----------------------\n");
	printf("Sequência de Fribonacci\n");
	printf("-----------------------\n\n");
	
	int sequencia[20];
	// Preenchendo os dois primeiros valores da sequência
	sequencia[0] = 0;
	sequencia[1] = 1;
	for(int i = 2; i < 20; i++){
		// aqui dentro preenche todo o resto do vetor sendo o valor na posição i a soma dos dois elementos anteriores
		// como não tinha como preencher automaticamente eu inicializei os dois primeiros valores como 0 e 1.
		sequencia[i] = sequencia[i-1] + sequencia[i-2];
	}
	
	for(int i = 0; i<20;i++) printf("%i\n", sequencia[i]);
	
	system("PAUSE");
	return 0;
}
