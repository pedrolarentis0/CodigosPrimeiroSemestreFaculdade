#include <stdio.h>

int main()
{
	int mes;

	
	printf("Informe um mes conforme seu numero relacionado: \n");
	scanf("%d", &mes);
	
	if (mes == 12 || mes == 1 || mes == 2) {
		printf("Verao");
	} else if (mes == 3 || mes == 4 || mes == 5) {
		printf("Outono");
	} else if (mes == 6 || mes == 7 || mes == 8) {
		printf("Inverno");
	} else if (mes == 9 || mes == 10 || mes == 11) {
		printf("Primavera");
	} else {
		printf("Mes invalido");
	}
	
	
	return 0;
		
}