// Digite o nome e a idade de 10 pessoas e informe
// uma lista com todos os maiores e menores de idade

#include <stdio.h>
#include <locale.h>

int main() {
	int x = 0, idade[10];
	char nome[20][10];
	
	while (x < 10) {
		printf("\nDigite seu nome: ");
		scanf("%s", &nome[x]);
		printf("\nDigite sua idade: ");
		scanf("%d", &idade[x]);
		x++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (idade[i] >= 18) {
			printf("\n%s", nome[i]);
		}
	}
		
	return 0;
}
