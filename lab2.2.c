#include <stdio.h>

long long cache[300];

long long get_fibbonachi_via_recursion(int number);

int main()
{
    int number;
    printf("Enter n for find fibbonachi: ");
    scanf("%d", &number);
    for (int count = 1; count < number; count++)
    {
        printf("%lld", get_fibbonachi_via_recursion(count));
    }
      
    return 0;
}

long long get_fibbonachi_via_recursion(int number)
{
    if (cache[number] == 0)
    {
        if (number == 1 || number == 2)
        {
            cache[number] = 1;
        }
        else
        {
            cache[number] = get_fibbonachi_via_recursion(number - 1) + get_fibbonachi_via_recursion(number - 2);
        }
    }

    return cache[number];
}
