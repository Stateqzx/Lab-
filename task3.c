#include <stdio.h>

int get_power(int number, int power);

int main()
{
  int power_of_number;
  int number;
  printf("Enter number: ");
  scanf("%d", &number);
  printf("Enter degree: ");
  scanf("%d", &power_of_number);
  printf("%d %d\n", power_of_number, get_power(number, power_of_number));

  return 0;
}
int get_power(int number, int power)
{
  int i;
  int result;
  result = 1;
  for (i = 1; i <= power; ++i)
  {
    result = result * number;
  }
  
  return result;
}
