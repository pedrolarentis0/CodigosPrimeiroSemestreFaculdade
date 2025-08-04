#include <stdio.h>

int main() {
    float salario, aumento, novo_salario, percentual;
    int tempo_servico;

    printf("Informe seu tempo de servico em anos:\n");
    scanf("%d", &tempo_servico);

    printf("Informe seu salario: \n");
    scanf("%f", &salario);

    if(tempo_servico <= 5) {
        percentual = 3;
    } else if (tempo_servico <= 10) {
		percentual = 5;
	} else if (tempo_servico <= 15) {
		percentual  = 8; 
	} else {
		percentual = 10;
	}		
   
     aumento = salario * (percentual / 100);
     novo_salario = salario + aumento;
     
     printf("O funcionario tem %d anos de servico obteve %.2f %% de reajuste ficando com salario = %.2f", tempo_servico, percentual, novo_salario);
     
     return 0;
}
