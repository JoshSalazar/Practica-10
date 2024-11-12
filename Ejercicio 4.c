/*Alfonso Francisco De Abiega L'Eglisse
matrices, practica 10*/

#include <stdio.h>

int main()

{
  int arr[3][3];
  int i, j, k;
  int c, d;

  printf("Pedir valores\n");
    
  for(c = 0; c < 3; c++)
    {
      printf("Ingresar los valores del renglón separados por una coma(,).\n");
      scanf("%d,%d,%d", &i, &j, &k);
        
      arr[c][0] = i;
      arr[c][1] = j;
      arr[c][2] = k;
    }
  printf("\n\n");
  printf("Esta es la matriz\n");
    
  for(c = 0; c < 3; c++)
    {
      for(d = 0; d < 3; d++)
      {
        printf("%d | ", arr[c][d]);
      }
      printf("\n");
    }
  return 0;
}
