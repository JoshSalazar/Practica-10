/*Salazar Anicasio Joshua
ejercicio 1 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>
#include <math.h>

int main()
{
  int arr[3][3] = {{1, 2, 3} , {1, 2, 3} , {1, 2, 3}};
  int i, j;
  
  for(i = 0; i < 3; i++)
  {
    printf("\n");
    for(j = 0; j<3; j++)
    {
      printf("\t%d", arr[i][j]);
    }
  }
}
