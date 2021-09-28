#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main () {
	int opcao, num1, num2;
	setlocale(LC_ALL, "Portuguese");

printf ("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\n\n");
scanf ("%d", &opcao);

printf ("Digite dois valores:");
scanf ("%d%d", &num1, &num2);

switch (opcao) {
case 0:
	printf ("Saindo...\n");
	break;
case 1:
	printf ("\nResultado da soma: %d\n", num1 + num2);
	break;
case 2:
	printf ("\nResultado da subtração: %d\n", num1 - num2);
	break;
case 3:
	printf ("\nResultado da multiplicação: %d\n", num1 * num2);
	break;
case 4:
	while (num2 == 0) {
		printf ("Nao existe divisão por zero!\nDigite outro valor:");
		scanf ("%d", &num2);
	}
	printf ("\nResultado da divisao: %d\n", num1 / num2);
	break;
    default:
	printf("Opção inválida.\nDigite outra opção:");
}
}