/*Salazar Anicasio Joshua
ejercicio 5 matriz 3x3
Práctica 10 18/10/24*/

#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], res[3][3];
    int N1, N2, N3;
    int i, j;

    printf("Introduzca los valores de la primera matriz.\n");
    
    for(i=0; i<3; i++)
    {
        printf("Introduzca los valores del renglón, separados por una coma(,)\n");
        scanf("%d,%d,%d", &N1, &N2, &N3);
        
        mat1[i][0] = N1;
        mat1[i][1] = N2;
        mat1[i][2] = N3;
    }

    printf("Introduzca los valoresde la segunda matriz.\n");
    for(i=0; i<3; i++)
    {
        printf("Introduzca los valores del renglón, separados por una coma(,)\n");
        scanf("%d,%d,%d", &N1, &N2, &N3);
        mat2[i][0] = N1;
        mat2[i][1] = N2;
        mat2[i][2] = N3;
    }

    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        res[i][j] = mat1[i][j] + mat2[i][j];
      }
    }
  
    printf("\n");
    printf("Esta es la matriz resultante:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", res[i][j]);
        }
        printf("\n");
    }
  return 0;
}
