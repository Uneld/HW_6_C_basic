#include <stdio.h>

int recurs_power(int n, int p);

int main()
{
	int base, exponent;
	printf("Enter a base and exponent: ");
	scanf("%d%d", &base, &exponent);

	int result = recurs_power(base, exponent);
	printf("Result = %d\n", result);
	return 0;
}

int recurs_power(int n, int p)
{
	if (p == 0)
	{
		return 1;
	}
	return n * recurs_power(n, p - 1);
}