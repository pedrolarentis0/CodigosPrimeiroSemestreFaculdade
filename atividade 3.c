#include <stdio.h>

int main()
{
	int num;
	
	printf("digite um numero:");
	scanf("%d", &num);
	
	if(num % 5 == 0 ) {
		
		printf("%d e multiplo de 5", num);	
	}
	else {
		printf("%d nao e multiplo de 5", num);
	}
	
	
return 0;	
	
	
}