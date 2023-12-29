#include <stdio.h>
int main()
{
   int a[20][20], i, j, m, n, count = 0;
   printf("Enter size of row and Colume:");
   scanf("%d %d", &m, &n);

   printf("Enter Elements:");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf(" %d", &a[i][j]);
      }
   }
   printf("\n Enter Elements \n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf(" %d", a[i][j]);
         count++;
      }
      printf("\n");
   }
   printf(" the count of Elements= %d", count);

   return 0;
}
