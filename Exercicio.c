#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale( LC_ALL, "Portuguese");
    int numero, dobro;
    printf("Digite um número: " );
    scanf("%d", &numero );
    dobro = numero * 2;
    printf( "\nO dobro do número é: %d\n", dobro);

}
