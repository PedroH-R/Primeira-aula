#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale( LC_ALL, "Portuguese");
    int numero, dobro;
    printf("Digite um n�mero: " );
    scanf("%d", &numero );
    dobro = numero * 2;
    printf( "\nO dobro do n�mero �: %d\n", dobro);

}
