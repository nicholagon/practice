#include <stdio.h>

int find_gcd(int first, int second);

int main(void)
{
    int a, b;
    int gcd;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    if (a > b)
    {
        gcd = find_gcd(a, b);
    }
    else
    {
        gcd = find_gcd(b, a);
    }

    printf("GCD: %i\n", gcd);
}

int find_gcd(int first, int second)
{
    int temp = 0;
    while (second != 0)
    {
        temp = first;
        first = second;
        second = temp % second;
    }

    return first;
}