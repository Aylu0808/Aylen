#include <stdio.h>

int main()
{
    int DNI1 [8], DNI2 [8];
    int i = 0, l = 7;
    
    for(i=0; i<8; i++)
    {
        printf("Ingrese los primeros DNIs de los jugadores: ");
        scanf("%d", &DNI1[i]);
        
        printf("Ingrese los segundos DNIs de los jugadores: ");
        scanf("%d", &DNI2[i]);
        
    }
    
    for(i=0; i<8; i++)
    {
        printf("Pareja %d: %d y %d\n", i, DNI1[i], DNI2[l-i]);
    }

    return 0;
}



