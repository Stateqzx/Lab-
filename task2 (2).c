#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int is_simple(int number)
{
   if (number < 2)
   {
      printf("Wrong Number");
      
      return 2;
   }
   for (int i = 2; i < number; i++)
   {
       if (number % i == 0)
       {
          return 0;
       }
   }
   return 1;
}
int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", is_simple(num));

    return 0;
}
