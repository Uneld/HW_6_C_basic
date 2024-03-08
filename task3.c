#include <stdio.h>

int count_ones_bitwise(int N);

int main()
{
    int num;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("Bitwise counter: %d", count_ones_bitwise(num));

    return 0;
}

int count_ones_bitwise(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else
    {
        return (N & 1) + count_ones_bitwise(N >> 1);
    }
}