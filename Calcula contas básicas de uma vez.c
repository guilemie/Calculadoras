#include <stdio.h>
#include <stdlib.h>

// instagram: @guilemie


int main(void)
{
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora rapida.\n");
    printf("Coloque os dois numeros inteiros para calcular.\n");
    printf("Use espaco para separar os numeros que quer calcular:\n");
    scanf("%i %i", &num1, &num2);

    soma        = num1 + num2;
    subtracao   = num1 - num2;
    multi       = num1 * num2;
    div         = num1 / num2;

    printf("Resultado da soma: %i\n", soma);
    printf("Resultado da subtracao %i\n", subtracao);
    printf("Resultado da multiplicacao: %i\n", multi);
    printf("Resultado da divisao: %i\n", div);


    return 0;
}
