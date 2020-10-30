// Faça um algortmo que receba 3 notas de 5 alunos
// e seus nomes e mostre a media da turma e o nome 
// e a média do aluno com a maior nota

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	float nota1 = 0, nota2 = 0, nota3 = 0, maior = 0, mediaturma = 0;
	float media1 = 0, media2 = 0, media3 = 0, media4 = 0, media5 = 0;
	char nome[30], nome1[30], nome2[30], nome3[30], nome4[30], nome5[30];
	
	for (int i=1; i<=5; i++) {
				
		printf("\nInforme sue nome: ");
		scanf("%s", &nome);
		printf("Digite sua nota 1: ");
		scanf("%f", &nota1);
		printf("Digite sua nota 2: ");
		scanf("%f", &nota2);
		printf("Digite sua nota 3: ");
		scanf("%f", &nota3);
		
		if (i == 1) {
			strcpy(nome1, nome);
			media1 = (nota1 + nota2 + nota3) / 3;
		} else if (i == 2) {
			strcpy(nome2, nome);
			media2 = (nota1 + nota2 + nota3) / 3;
		} else if (i == 3) {
			strcpy(nome3, nome);
			media3 = (nota1 + nota2 + nota3) / 3;
		} else if (i == 4) {
			strcpy(nome4, nome);
			media4 = (nota1 + nota2 + nota3) / 3;
		} else if (i == 5) {
			strcpy(nome5, nome);
			media5 = (nota1 + nota2 + nota3) / 3;
		}
	}
	
	mediaturma = (media1 + media2 + media3 + media4 + media5) / 5;
	
	printf("\nA média da turma é: %.2f", mediaturma);
	
	if (media1 > media2 && media1 > media3 && media1 > media4 && media1 > 5) {
		printf("\nO aluno com a maior média é: %s", nome1);
		printf("\nE a sua média é: %.2f", media1);
	} else if (media2 > media1 && media2 > media3 && media2 > media4 && media2 > media5) {
		printf("\nO aluno com a maior média é: %s", nome2);
		printf("\nE a sua média é: %.2f", media2);
	} else if (media3 > media1 && media3 > media2 && media3 > media4 && media3 > media5) {
		printf("\nO aluno com a maior média é: %s", nome3);
		printf("\nE a sua média é: %.2f", media3);
	} else if (media4 > media1 && media4 > media2 && media4 > media3 && media4 > media5) {
		printf("\nO aluno com a maior média é: %s", nome4);
		printf("\nE a sua média é: %.2f", media4);
	} else if (media5 > media1 && media5 > media2 && media5 > media3 && media5 > media4) {
		printf("\nO aluno com a maior média é: %s", nome5);
		printf("\nE a sua média é: %.2f", media5);
	}
	
	return 0;
}
