// Informe quantas pessoas no sistema pussuem salario acima de R$ 5.000,00

#include <stdio.h>
#include <locale.h>


int main() {
	int z = 1, cont = 0;
	float sal = 0;
	
	setlocale(LC_ALL, "");
	
	do {	
	printf("Informe um sal�rio: ");
	scanf("%f", &sal);
	
	if (sal > 5000) {
		cont++;
	}
	
	printf("\nDeseja colocar mais um sal�rio?");
	printf("\n[1] - SIM [2] - N�O\n");
	scanf("%d", &z);
	
	} while (z == 1);
	
	printf("\n\nO n�mero de pessoas que tem sal�rio acima de R$ 5.000,00 �: %d", cont);
	
	return 0;
}
