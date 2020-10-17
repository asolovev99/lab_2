#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_fibbonachi_via_cycle(int number);

long get_fibbonachi_via_recursion(int number);

void power(int number, int source, int target);

int main()
{
    int number = 0;

    scanf("%d", &number);
    printf("%ld", get_fibbonachi_via_cycle(number));

    return 0;
}

long get_fibbonachi_via_cycle(int number)
{
    int first = 0;
    int second = 1;

    if (number == 1)
    {
        return first;
    }
    for (int i = 3; i <= number; i++)
    {
        second = first + second;
        first = second - first;
    }

    return second;
}

long get_fibbonachi_via_recursion(int number)
{
    if (number == 1)
    {
        return 0;
    }
    else if (number == 2)
    {
        return 1;
    }
    else
    {
        return get_fibbonachi_via_recursion(number - 2) + get_fibbonachi_via_recursion(number - 1);
    }
}

void power(int number, int source, int target)
{

}