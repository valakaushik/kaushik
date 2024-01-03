#include <stdio.h>

int main()
{
   int a;
  printf("Enter charater :");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("\nJanuary");
    break;
  case 2:
    printf("\nFebruary,");
    break;
  case 3:
    printf("\nMarch");
    break;
  case 4:
    printf("\n April");
    break;
  case 5:
    printf("\n May,");
    break;
  case 6:
    printf("\njune");
    break;
  case 7:
    printf("\nJuly");
    break;
  case 8:
    printf("\nAugust");
    break;
  case 9:
    printf("\nSeptember");
    break;
  case 10:
    printf("\n October ");
    break;
     case 11:
    printf("\n November,");
    break;
     case 12:
    printf("\n  December.");
    break;

  default:
    printf("you enter invelid charater");
  }

  return 0;
}
