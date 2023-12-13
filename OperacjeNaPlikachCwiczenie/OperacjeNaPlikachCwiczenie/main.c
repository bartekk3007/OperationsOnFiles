#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp = NULL;

	errno_t error_code = fopen_s(&fp, "testowy.txt", "r");

	if (fp == NULL)
	{
		printf("Blad odczytu pliku\n");
		return EXIT_FAILURE;
	}

	char c;
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}

	fclose(fp);

	return 0;
}