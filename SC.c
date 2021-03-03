#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void converter_decimal_para_base(int, float);
float converter_digito_para_int (char);
float converter_base_para_decimal(int, char[]);

void converter_decimal_para_base(int base, float decimal) {

	int int_division = decimal;
	int temp[500];
	int i = 1;
	int TAMANHO = 0;

	temp[0] = int_division % base;
	TAMANHO++;
	int_division = int_division/base;

	while (int_division != 0) {

		temp[i] = int_division % base;
		TAMANHO++;
		int_division = int_division/base;

		i++;

	}

	for (int i = TAMANHO - 1; i >= 0; i--) {

		printf("%d", temp[i]);

	}

	putchar('\n');

}

float converter_base_para_decimal(int base, char number[]) {

	const int TAMANHO = strlen (number);
	float resultado = 0;

	for (int i = 0; i < TAMANHO; i++) {
		resultado += converter_digito_para_int(number[TAMANHO - i - 1])*pow(base, i);
	}

	return resultado;

}

float converter_digito_para_int (char digit) {

	return digit - 48;

}

int main () {

	int base;
	int base_para_converter;
	char number[500];

	printf("Digite a base que têm no momento: ");
	scanf ("%d", &base);

	printf("Digite o número da base %d: ", base);
	scanf("%s", number);

	printf("Digite a base que deseja converter: ");
	scanf("%d", &base_para_converter);

	converter_decimal_para_base(base_para_converter, converter_base_para_decimal(base, number));

	return 0;

}
