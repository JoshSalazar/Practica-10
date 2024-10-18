/*Salazar Anicasio Joshua
ejercicio 1 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>
#include <math.h>

int main()
{
  int arr[3][3] = {{1, 2, 3} , {1, 2, 3} , {1, 2, 3}};
  int i=0, j=0;

  while(i < 3);
  {
    printf("\n");
    j=0;
    while(j < 3);
    {
      printf("\t%d", arr[i][j]);
      j=j+1;
    }
    i=i+1;
  }
  return 0;
}
