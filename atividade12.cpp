#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int totalVotos;
	int candidatoVotado;
	int quantidadeVotosCandidato1 = 0;
	int quantidadeVotosCandidato2 = 0;
	int quantidadeVotosCandidato3 = 0;
	int quantidadeVotosCandidato4 = 0;
	int votosEmBranco = 0;
	int votosNulos = 0;

	printf("----Eleições Presidenciais----\n\n");
	
	do{
		// Perguntando o número do candidato e armazenando na variável "candidato votado"
		printf("=> Digite o número do candidato: ");
		scanf("%i", &candidatoVotado);
		
		switch (candidatoVotado){
			case 0: break;
			case 1: quantidadeVotosCandidato1++; break; 
			case 2: quantidadeVotosCandidato2++; break;
			case 3: quantidadeVotosCandidato3++; break;
			case 4: quantidadeVotosCandidato4++; break;
			case 5: votosNulos++; break;
			case 6: votosEmBranco++; break;
			default: printf("Número digitado é inválido, tente outro número...");
		}	
	} while(candidatoVotado !=0); // se o usuário digitou 0, o laço se interrompe

	// o total de votos é a soma de todos os votos realizados para cada um dos candidatos e dos nulos e em branco	
	totalVotos = votosEmBranco + votosNulos +
	quantidadeVotosCandidato1 + quantidadeVotosCandidato2 + quantidadeVotosCandidato3 + quantidadeVotosCandidato4;
	
	// calculando a porcentagem de votos para cada candidato e para brancos e nulos
	float porcentagemVotosCandidato1 = quantidadeVotosCandidato1 * 100 / totalVotos;
	float porcentagemVotosCandidato2 = quantidadeVotosCandidato2 * 100 / totalVotos;
	float porcentagemVotosCandidato3 = quantidadeVotosCandidato3 * 100 / totalVotos;
	float porcentagemVotosCandidato4 = quantidadeVotosCandidato4 * 100 / totalVotos;
	float porcentagemVotosBranco = votosEmBranco * 100 / totalVotos;
	float porcentagemVotosNulos = votosNulos * 100 / totalVotos;
	
	system("CLS"); // limpando a tela
	// e exibindo os resultados:
	printf("--------Resultado Eleições--------\n\n");
	printf("Candidato 1: votos: %i, porcentagem: %.2f%%\n", quantidadeVotosCandidato1, porcentagemVotosCandidato1);
	printf("Candidato 2: votos: %i, porcentagem: %.2f%%\n", quantidadeVotosCandidato2, porcentagemVotosCandidato2);
	printf("Candidato 3: votos: %i, porcentagem: %.2f%%\n", quantidadeVotosCandidato3, porcentagemVotosCandidato3);
	printf("Candidato 4: votos: %i, porcentagem: %.2f%%\n", quantidadeVotosCandidato4, porcentagemVotosCandidato4);
	printf("Votos nulos: votos: %i, porcentagem: %.2f%%\n", votosNulos, porcentagemVotosNulos);
	printf("Votos em branco: votos: %i, porcentagem: %.2f%%\n", votosEmBranco, porcentagemVotosBranco);
	
	system("PAUSE");	
	return 0;
}
