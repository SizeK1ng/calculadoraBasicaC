#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	char opcao;
	float int1, int2, result;

	printf("Escolha uma opera��o matematica (+,-,/,*)");
	scanf("%c", &opcao);

	printf("Digite um numero\n");
	scanf("%f", &int1);

	printf("Digite outro numero\n");
	scanf("%f", &int2);

	switch (opcao) {
		case '+':
			result = int1 + int2;
			break;
		case '-':
			result = int1 - int2;
			break;
		case '/':
			result = int1 / int2;
			break;
		case '*':
			result = int1 * int2;
			break;
		 default:
			printf("Digite uma op��o valida\n");
			return -1;
	}
	printf("O resultado da opera��o � %f", result);

return 0;
}