/*Salazar Anicasio Joshua
ejercicio 1 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>
#include <math.h>

int main()
{
  int arr[3][3] = {{1, 2, 3} , {1, 2, 3} , {1, 2, 3}};
  int i=0, j=0;

  do
  {
    printf("\n");
    j=0;
    do
    {
      printf("\t%d", arr[i][j]);
      j=j+1;
    }
    while(j < 3);
    i=i+1;
  }
  while(i < 3);
  return 0;
}
