#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	bool ehPrimo;
	
	//Pedindo os 2 números iniciais
	
	printf("Digite o primeiro número: ");
	scanf("%i", &n1);
		
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
	
	if(n1<0 || n2<0){
		printf("Valor inválido, tente outro valor.");	
		return 0;
	} 
	
	printf("\n\nNumeros primos entre %i e %i: \n\n", n1, n2);
	// i = n1 + 1 porque caso o n1 seja primo não é necessário mostrá-lo;
	for(int i = n1+1; i < n2; i++){
		//já começa recebendo true e só vai receber false se ele for divisível por algum número inferior à ele que não seja 1
		ehPrimo = true;
		//algoritmo básico para a verificação se o número é primo ou não:
		for(int num = 2; num < i; num++) 
			// se o numero em questão for divisível por algum número menor que ele e que
			// não seja 1, o algoritmo vai determinar que ele não é primo.
			if(i % num == 0) ehPrimo = false;  
		//se for primo vai imprimir ele
		if(ehPrimo) printf("=> %i\n", i);
	}

	
	system("PAUSE");	
	return 0;
}
