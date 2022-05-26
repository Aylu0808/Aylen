#include <stdio.h>

int main()
{
    int A[3], B[10];
    int i=0, j=0, repeticion = 0;
    
    for(i=0; i<3; i++)
    {
        printf("Ingrese la lista A: ");
        scanf("%d", &A[i]);
    }

    for(i=0; i<10; i++)
    {
        printf("Ingrese la lista B: ");
        scanf("%d", &B[i]);
    }
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<3; j++)
        {
            if(A[j] == B[i])
            {
                repeticion++;
            }
        }
    }
    
    printf("\nLos elementos de A se encuentran %d vez/veces en el el vector B", repeticion);
}


