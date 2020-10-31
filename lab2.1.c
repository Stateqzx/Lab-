#include <stdio.h>
#include <stdlib.h>
long long get_fibbonachi_via_cycle(int);
 int main()
{
  int num;
  printf ("Enter Fibonacci number: ");
  scanf ("%d",&num);
  printf("%lld\t",get_fibbonachi_via_cycle(num+1));
}

long long get_fibbonachi_via_cycle(int number)
{
  long fib = 1;
  long fib_sum = 1;
  for (int i = 0; i < number - 2; i++)
  {
    fib += fib_sum;
    fib_sum = fib - fib_sum;
  }

  return fib_sum;
}