// Faça um algoritmo que calcule média de vários alunos

#include <stdio.h>
#include <locale.h>

int main() {
	int z = 1, deno = 0;
	float num = 0, notas = 0, media = 0;
	
	setlocale(LC_ALL, "");
	
	do {
		printf("\nDigite uma nota: ");
		scanf("%f", &notas);
		num += notas;
		deno++;
		
		printf("\nDeseja colocar mais um salário?");
		printf("\n[1] - SIM [2] - NÃO\n");
		scanf("%d", &z);
	} while (z == 1);
	
	media = num / deno;
	printf("A média das notas digitadas é: %.2f", media);
	
	return 0;
}
