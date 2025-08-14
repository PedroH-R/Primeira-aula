#include <stdio.h>
#include <locale.h>

int main()

    setlocale( LC_ALL, "Portuguese");
    float numero, metade;
    printf("Entre com um número: " );
    scanf("%f", &numero );
    metade = (numero / 2);
    printf( "\nA metade do número é: %f\n", metade);

}
