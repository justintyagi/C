#include <stdio.h>
int main()
{
   int i, j;
   int digonal[2][2] = {{1, 4}, {8, 9}};
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
      {
         if ((i + j) % 2 != 0)
         {
            int a = -digonal[j][i];
            printf("%d ", -digonal[j][i]);
         }
         else
         {
            int b = digonal[j][i];
            printf("%d ", digonal[j][i]);
         }
      }
      printf("\n");
   }

   int transpose[2][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            transpose[i][j] = digonal[i][j];
        }
    }
   int a = digonal[0][0] * digonal[0][1] - digonal[0][1] * digonal[1][0];

   printf(" Determinent is :%d \n", a);
   float b = transpose[0][0] % a;
   float c = digonal[0][1] % a;
   float d = digonal[1][0] % a;
   float e = digonal[1][1] % a;
   float arr[2][2] = {{b, c}, {d, e}};
   printf(" A^-1 of this matrix is :%f", b);
   return 0;
}