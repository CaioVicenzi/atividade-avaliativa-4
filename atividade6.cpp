#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	bool ehPrimo;
	
	//Pedindo os 2 n�meros iniciais
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &n1);
		
	printf("Digite o segundo n�mero: ");
	scanf("%i", &n2);
	
	if(n1<0 || n2<0){
		printf("Valor inv�lido, tente outro valor.");	
		return 0;
	} 
	
	printf("\n\nNumeros primos entre %i e %i: \n\n", n1, n2);
	// i = n1 + 1 porque caso o n1 seja primo n�o � necess�rio mostr�-lo;
	for(int i = n1+1; i < n2; i++){
		//j� come�a recebendo true e s� vai receber false se ele for divis�vel por algum n�mero inferior � ele que n�o seja 1
		ehPrimo = true;
		//algoritmo b�sico para a verifica��o se o n�mero � primo ou n�o:
		for(int num = 2; num < i; num++) 
			// se o numero em quest�o for divis�vel por algum n�mero menor que ele e que
			// n�o seja 1, o algoritmo vai determinar que ele n�o � primo.
			if(i % num == 0) ehPrimo = false;  
		//se for primo vai imprimir ele
		if(ehPrimo) printf("=> %i\n", i);
	}

	
	system("PAUSE");	
	return 0;
}
