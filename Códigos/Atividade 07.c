#include <stdio.h>

int main()
{

	int ano_nasc, ano_atual, idade;

	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite seu ano de nascimento:");
	scanf("%d", &ano_nasc);

	idade = ano_atual - ano_nasc;

	printf("A idade e: %d \n", idade);


	return 0;




}
