/*Salazar Anicasio Joshua
ejercicio 3 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>

int main()
{
  int arr[3][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};
  int i=0, j=0;

  printf("Imprimir matriz\n");

  do
  {
    printf("\n");
    
    j=0;
    
    do
    {
      printf("%d | ", arr[i][j]);
      
      j=j+1;
    }
    while(j < 3);
    
    i=i+1;
  }
  while(i < 3);
  
  return 0;
}
