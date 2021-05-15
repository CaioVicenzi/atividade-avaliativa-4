#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float maiorAltura = 0, menorAltura = 100000000.0, altura, mediaAlturaMulheres;
	float totalAlturaFeminina = 0;
	char sexo;
	int contadorDeMulheres = 0;
	
	for(int i = 0; i < 50; i++){
		printf("-------pessoa nº%i-------\n\n", i+1);
		printf("Digite o sexo (m -> masculino, f-> feminino): ");
		scanf("%c", &sexo);
		fflush(stdin);
		
		printf("Digite a altura: ");
		scanf("%f", &altura);
		
		fflush(stdin);
		
		if(sexo == 'f')	{
			totalAlturaFeminina = totalAlturaFeminina + altura;
			contadorDeMulheres = contadorDeMulheres + 1;
		}
		
		if(altura > maiorAltura) maiorAltura = altura;
		if(altura < menorAltura) menorAltura = altura;
		printf("\n");
	}
	mediaAlturaMulheres = totalAlturaFeminina / contadorDeMulheres;
	system("CLS");
	printf("\n\n----------resutado:---------\n\n");
	printf("Maior altura: %.2f\n", maiorAltura);
	printf("Menor altura: %.2f\n", menorAltura);
	printf("Media das alturas das mulheres: %.2f\n", mediaAlturaMulheres);

	system("PAUSE");	
	return 0;
}
