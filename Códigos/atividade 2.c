#include <stdio.h>

int main()
{
	
	int idade;
	char nome[30];
	
	printf("Entre com o seu nome: ");
	scanf("%s", nome);
	
	printf("Entre com a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18) {	
		printf("%s e maior de idade", nome);
	}
	else {
		printf("%s e menor de idade", nome);
	}
	
	
	
	return 0;
}