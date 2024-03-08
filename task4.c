#include <stdio.h>

void print_odd_numbers(int *data, int count);
void print_odd_numbers_2();

int main()
{
	
    int count = 0;
    int numbers[] = {12, 13, 173, 28, 19, 0};
    printf("Odd numbers with input array: \n");
    print_odd_numbers(numbers, count);
    putchar('\n');
    putchar('\n');

	printf("Enter the elements of the sequence: \n");
    print_odd_numbers_2();

    
    return 0;
}

void print_odd_numbers(int *data, int count)
{
    if (data[count] == 0)
    {
        return;
    }

    if (data[count] % 2 == 1)
    {
        printf("%d ", data[count]);
    }
    print_odd_numbers(data, count + 1);
}

void print_odd_numbers_2()
{
    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        return;
    }
    if (num % 2 == 1)
    {
        printf("%d ", num);
    }
    print_odd_numbers_2();
}
