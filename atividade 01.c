#include <stdio.h>

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num == 0)
	{
			printf("Este numero e neutro\n");
	}
	else if (num %2 == 0)
	{
		printf("numero e par \n");
	}		
	else
	{
		printf("Numero e impar \n ");
		
	}
	
	
	return 0;	
}