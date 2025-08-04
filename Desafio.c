#include <stdio.h>

int main()
{
	//Declaração
	int idade, batimentos;
	//Entrada
	printf("Entre com sua idade: ");
	scanf("%d", &idade);
	//Processo
	//hora - dia - ano = batimentos em um ano
	batimentos = 80 * 60 * 24 *365;
	//Quantidade de anos x os batimentos de um ano
	batimentos = batimentos * idade;
	//Saída
	printf("A pessoa com %d anos ja teve %d batimentos. \n",idade,batimentos);
		
	
	
	
	
	
}