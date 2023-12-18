#include <stdio.h>

int main()
{
  int ch;
  printf("\nN.1 Gujarati");
  printf("\nN.2 English");
  printf("\nN.3 Hindi");
  printf("\nN.4 urdu");
  printf("\nEnter Your Choice ");
  scanf("%d", &ch);

  switch (ch)
  {
  case 1:
    printf("\n Your Language is Gujarati");
    break;

  case 2:
    printf("\n Your Language is English");
    break;

  case 3:
    printf("\n Your Language is Hindi");
    break;

  case 4:
    printf("\n Your Language is urdu");
    break;

  default:
    printf("\n Your Language is not available");
    break;
  }

  return 0;
}