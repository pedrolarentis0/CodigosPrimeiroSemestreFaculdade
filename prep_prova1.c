#include <stdio.h>

int main() {
	
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Voce esta abaixo do peso ideal\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Parabens, voce esta em seu peso normal!\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Você esta acima de seu peso (sobrepeso)\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidade grau I\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }

    return 0;
}