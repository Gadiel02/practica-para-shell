#include <stdio.h>

void getpit(char *prompt, char *buffer, int buffer_size)
{
	printf("%s", prompt);
	fgets(buffer, buffer_size, stdin);
}

int main()
{
	char input[100];

	getpit("Por favor, introduce algo: ", input, sizeof(input));

	printf("Has introducido: %s", input);

	return 0;
}

