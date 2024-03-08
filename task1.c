#include <stdio.h>

void print_num(int num);

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    print_num(num);

    return 0;
}

void print_num(int num)
{
    if (num < 10)
    {
        printf("%d ", num);
        return;
    }
    print_num(num / 10);
    printf("%d ", num % 10);
}