#include <stdio.h>
#include <windows.h> 

int main()
{
    int i, op;
    int controle = 0;
    int vetor[10];

    while (1)
    {
        system("cls");

        printf("Menu de Opcoes\n");
        printf("1 - Ler um novo valor.\n");
        printf("2 - Mostrar dados cadastrados ate entao na ordem normal.\n");
        printf("3 - Mostrar dados cadastrados ate entao de tras para frente.\n");
        printf("4 - Informar um valor e mostrar quantas vezes ele aparece no vetor.\n");
        printf("5 - Informar um valor e mostrar os indices em que ele aparece.\n");
        printf("6 - Ler um valor a ser substituido e informar o novo valor.\n");
        printf("7 - Somar todos os valores informados ate entao.\n");
        printf("8 - Mostrar o maior e o menor valor e seus respectivos indices.\n");
        printf("0 - Sair.\n");
        printf("Entre com sua opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                if (controle >= 10) {
                    printf("\nLimite de 10 valores atingido!\n");
                } else {
                    printf("\nDigite um valor: ");
                    scanf("%d", &vetor[controle]);
                    controle++;
                    printf("Valor cadastrado com sucesso!\n");
                }
                break;  

            case 2:
                if (controle == 0) {
                    printf("\nNenhum valor cadastrado!\n");
                } else {
                    printf("\nValores cadastrados: ");
                    for (i = 0; i < controle; i++) {
                        printf("%d ", vetor[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (controle == 0) {
                    printf("\nNenhum valor cadastrado!\n");
                } else {
                    printf("\nValores cadastrados de tras para frente: ");
                    for (i = controle - 1; i >=0; i--) {
                        printf("%d ", vetor[i]);
                    } 
                        printf("\n");  
                }   
                break;

            case 4:
                if (controle == 0) {
                    printf("\nNenhum valor cadastrado!\n");
                } else {
                    int valor, cont = 0;
                    printf("\nDigite o valor a procurar: ");
                    scanf("%d", &valor);
                    for (i = 0; i < controle; i++) {
                        if (vetor[i] == valor) {
                            cont++;
                        }
                    }
                    printf("\nO valor %d aparece %d vezes.\n", valor, cont);
                }
                break;

            case 5:
                if (controle == 0) {
                    printf("\nNenhum valor cadastrado!\n");
                } else {
                    int valor, encontrou = 0; 
                    printf("\nDigite o valor a buscar: ");
                    scanf("%d", &valor);
                    printf("\nO valor %d aparece nos indices: ", valor);
                    for (i = 0; i < controle; i++) {
                        if (vetor[i] == valor) {
                            printf("%d ", i);
                            encontrou = 1;  
                        }
                    }
                    if (!encontrou) {
                        printf ("Nenhum");
                    }
                    printf("\n");
                }
                break; 

            case 6: 
                if (controle == 0) {
                    printf("\nNenhum valor cadastrado!\n");
                } else {
                    int antigo, novo, trocou = 0;
                    printf("\nDigite o valor a ser substituido: ");
                    scanf("%d", &antigo);
                    printf("Digite o novo valor: ");
                    scanf("%d", &novo);
                    for (i = 0; i < controle; i++) {
                        if (vetor[i] == antigo) {
                            vetor[i] = novo;
                            trocou = 1;
                        }
                    }
                    if (trocou) {
                        printf("\nSubstituicao realizada com sucesso!\n");
                    } else {
                        printf("\nValor nao encontrado.\n");
                    }
                }
                break;
                
                
                
    
        

            case 0:
                printf("\nSaindo do programa...\n");
                return 0;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        printf("\n");
        system("pause"); 
    }

    return 0;
}
    