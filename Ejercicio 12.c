#include <stdio.h>

int main()
{
    int A[3];
    int B[10];
    int i=0;
    int j=0;
    
    for(i=0; i<3; i++)
    {
        printf("Ingrese la lista A: ");
        scanf("%d", &A[i]);
    }
     
    printf("\n");
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese la lista B: ");
        scanf("%d", &B[i]);
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d, %d\n", A[i], B[j]);
        }
    }
}
