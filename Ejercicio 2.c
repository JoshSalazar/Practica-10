/*Salazar Anicasio Joshua
ejercicio 2 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>

int main()

{
  int arr[3][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};
  int i = 0, j = 0;
  
  printf("Imprimir matriz\n");
  
  while(i < 3)
  {
    while(j < 3)
    {
      printf("%d | ", arr[i][j]);
      
      j = j + 1;
    }
    printf("\n");
    
    j = 0;
    i = i + 1;
  }
  return 0;
}
