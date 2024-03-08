#include <stdio.h>

int acounter();


int main()
{
	printf("Enter a string ending with '.':\n");
	int count = acounter();
	printf("Result = %d\n", count);
	return 0;
}

int acounter()
{
	char c;
	scanf("%c", &c);
	if (c == '.')
	{
		return 0;
	}
	return (c == 'a') + acounter();
}
