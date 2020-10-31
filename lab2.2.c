#include <stdio.h>

long long get_fibbonachi_via_recursion(int number)
{
	if (number == 1 || number == 2)
	{
		return 1;
	}

	return get_fibbonachi_via_recursion(number - 1) + get_fibbonachi_via_recursion(number - 2);
}

int main()
{
	int n;
	printf("number = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%lld ", get_fibbonachi_via_recursion(i));
	}
	getchar(); getchar();

	return 0;
}