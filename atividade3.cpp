#include<stdio.h>
#include<locale.h>
#include <string.h> 
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int qntdMedalhasOuro;
	int qntdMedalhasPrata;
	int qntdMedalhasBronze;
	 
	int pontos[3];
	char nomes[3][50];
	
	for(int i = 0; i<3; i++){
		printf("----------país nº%i---------------\n\n", i+1);
		
		//Pega o nome do país e armazena em "nome"
		printf("Digite o nome do país: ");
		fgets(nome, 50, stdin);
		fflush(stdin);
	
		// Pega a quantidade de medalhas de ouro, de prata e de bronze e armazena nas variáveis
		printf("Digite quantas medalhas de ouro que esse país tem: ");
		scanf("%i", &qntdMedalhasOuro);
		fflush(stdin);
	
		printf("Digite quantas medalhas de prata que esse país tem: ");
		scanf("%i", &qntdMedalhasPrata);
		fflush(stdin);
		
		printf("Digite quantas medalhas de bronze que esse país tem: ");
		scanf("%i", &qntdMedalhasBronze);
		fflush(stdin);
		
		//calcula os pontos totais que aplica o peso em cada quantidade de medalhas e armazena na variável pontos totais
		int pontosTotais = (qntdMedalhasOuro * 3) + (qntdMedalhasPrata * 2) + qntdMedalhasBronze; 
		//guarda no vetor de pontos totais de cada uma das 3 equipes
		pontos[i] = pontosTotais;
		//guarda no vetor de nomes das equipes
		
		strcpy(nomes[i], nome);
		printf("\n");
	}
	
	// Nessa parte do código já temos dois vetores, um preenchido com os pontos totais de cada uma das 3 equipes
	// e outro vetor preenchido com os nomes de cada uma das 3 equipes de maneira que a equipe na posição 0 tem a quantidade
	// de pontos indicada no vetor de pontos na mesma posição.

	// uma pequena lógica para descobrir qual é o índice do maior número dentro do vetor de pontos e armazenando esse índice
	// na variável "indiceMaior"
	int indiceMaior = 0;
	for(int i = 0; i<3; i++)
		if(pontos[i] > pontos[indiceMaior]) indiceMaior = i;
	
	// Exibindo o resultado para o usuário e finalizando o programa.
	printf("\n\nO país que mais tirou pontos é o %s", nomes[indiceMaior]);
	
	system("PAUSE");	
	return 0;
}
