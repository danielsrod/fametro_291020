// Fa�a um algoritmo que calcule m�dia de v�rios alunos

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
		
		printf("\nDeseja colocar mais um sal�rio?");
		printf("\n[1] - SIM [2] - N�O\n");
		scanf("%d", &z);
	} while (z == 1);
	
	media = num / deno;
	printf("A m�dia das notas digitadas �: %.2f", media);
	
	return 0;
}
