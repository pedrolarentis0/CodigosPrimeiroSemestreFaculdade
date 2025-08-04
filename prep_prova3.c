#include <stdio.h>

int main()
{
	//Declaracao
	int tipo;
	float salario, ferias, decimo, FGTS, aliquota, desconto, saldo_salario, aviso_previo, valor_receber;
	//Entrada
	printf("Entre com o saldo do seu salario: ");
	scanf("%f", &salario);

	printf("Entre com o valor das ferias vencidas+proporcional: ");
	scanf("%f", &ferias);	

	printf("Entre com o valor do decimo terceiro: ");
	scanf("%f", &decimo);
	printf("Entre com o valor depositado no FGTS: ");
	scanf("%f", &FGTS);

	printf("1 - Demissao sem justa causa.\n");
	printf("2 - Demissao com justa causa.\n");
	printf("3 - Pedido de demissao.\n");
	printf("Qual e o tipo de sua recisao: ");
	scanf("%d", &tipo);
    //Processamento
if (salario <= 1903.98)
    aliquota = 0;
else if (salario <= 2826.65)
    aliquota = 7.5;
else if (salario <= 3751.05)
    aliquota = 15;
else if (salario <= 4664.68)
    aliquota = 22.5;
else
    aliquota = 27.5;

    desconto = salario * (aliquota / 100);
    saldo_salario = salario - desconto; 

    if (tipo == 1)
    {
        ferias = ferias * 1.33;
        aviso_previo = FGTS * 0.4;
        valor_receber = saldo_salario + ferias + aviso_previo + decimo;
    }
    else 
	{
		ferias = ferias * 1.33;
		aviso_previo = 0;
		valor_receber = saldo_salario + ferias + decimo;
	}
	//Saida
	printf("Voce vai receber os seguintes valores em sua rescisao.\n");
	printf("Salario = %.2f.\n", salario);
	printf("Saldo do salario com desconto = %.2f.\n", saldo_salario);
	printf("Valor das ferias com 33%% = %.2f.\n", ferias);					
	printf("Valor do FGTS = %.2f.\n", FGTS);
	printf("Aviso previo = %.2f.\n", aviso_previo);
	printf("Voce vai receber o acerto de = %.2f.\n", valor_receber);

	return 0;
}
