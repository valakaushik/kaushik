#include <stdio.h>

int main()
{
  int number, divisible;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Enter the divisible: ");
  scanf("%d", &divisible);

  if (number % divisible == 0)
  {
    printf("%d is divisible by %d\n", number, divisible);
  }
  else
  {
    printf("%d is not divisible by %d\n", number, divisible);
  }

  return 0;
}