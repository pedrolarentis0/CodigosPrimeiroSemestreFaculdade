#include <stdio.h>

int main()
{
	//declaração
	float renda_per_capita, valor_credito, quant_creditos, valor_matricula = 3000;
	int SC;
	
	
	//entrada
	printf("Informe sua renda per capita familiar: \n");
	scanf("%f", &renda_per_capita);
	printf("E morador de Santa catarina? 1 para sim e 0 para nao: \n");
    scanf("%d", &SC);
	printf("Digite o valor de um credito: \n");
	scanf("%f", &valor_credito);
	printf("Digite a quantidade de creditos que possue: \n");
	scanf("%f", &quant_creditos);
	
	if(renda_per_capita <= 4000 && SC == 0) {
		printf("Aluno nao tem direito a Universidade Gratuita. \n");
		printf("Valor total da matricula: R$ %.2f\n", valor_matricula);
	} else if (SC == 1) {
		printf("Aluno tem direito a Universidade Gratuita. \n");
	} else if (SC == 1 && renda_per_capita < 2000) {
		printf("O aluno tem 100% de bolsa. \n");
	}
	
	
	
}