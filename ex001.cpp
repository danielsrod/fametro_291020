// Informe quantas pessoas no sistema pussuem salario acima de R$ 5.000,00

#include <stdio.h>
#include <locale.h>


int main() {
	int z = 1, cont = 0;
	float sal = 0;
	
	setlocale(LC_ALL, "");
	
	do {	
	printf("Informe um salário: ");
	scanf("%f", &sal);
	
	if (sal > 5000) {
		cont++;
	}
	
	printf("\nDeseja colocar mais um salário?");
	printf("\n[1] - SIM [2] - NÃO\n");
	scanf("%d", &z);
	
	} while (z == 1);
	
	printf("\n\nO número de pessoas que tem salário acima de R$ 5.000,00 é: %d", cont);
	
	return 0;
}
