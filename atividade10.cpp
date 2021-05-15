#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char tipoDoVinho;
	int quantidadeVinhos;
	int quantidadeVinhosTinto = 0;
	int quantidadeVinhosRose = 0;
	int quantidadeVinhosBranco = 0;
	printf("----------instruções----------\n\n");
	printf("Quando aparecer campos perguntado o tipo do vinho, você deve preencher com: \n");
	printf("R -> vinho do tipo rosê\n");
	printf("T -> vinho do tipo tinto\n");
	printf("B -> vinho do tipo branco\n");
	printf("F -> finalizar a operação\n\n");
	
	system("PAUSE");
	system("CLS");
		
	while(tipoDoVinho != 'F'){
		printf("Digite o tipo do vinho: ");
		scanf("%c", &tipoDoVinho);
		fflush(stdin);
		switch(tipoDoVinho){
			case 'T': quantidadeVinhosTinto++; break;
			case 'B': quantidadeVinhosBranco++; break;
			case 'R': quantidadeVinhosRose++; break;
			case 'F': break;
			default: printf("\nTipo de vinho digitado é inválido, tente outro valor\n");
		
		}		
	}
	
	quantidadeVinhos = quantidadeVinhosBranco + quantidadeVinhosRose + quantidadeVinhosTinto;
		
	float porcentagemVinhoBranco = ((quantidadeVinhosBranco * 100)/ quantidadeVinhos);
	float porcentagemVinhoRose = ((quantidadeVinhosRose * 100)/ quantidadeVinhos);
	float porcentagemVinhoTinto = ((quantidadeVinhosTinto * 100)/ quantidadeVinhos);
		
	system("CLS");
	printf("\n\n--------Resultado---------\n\n");
	printf("Porcentagem de vinhos tintos: %.2f%%\n", porcentagemVinhoTinto);
	printf("Porcentagem de vinhos brancos: %.2f%%\n", porcentagemVinhoBranco);
	printf("Porcentagem de vinhos rosês: %.2f%%\n", porcentagemVinhoRose);
	
	system("PAUSE");	
	return 0;
}
