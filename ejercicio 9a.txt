#include <stdio.h>
  
int main()
{
    int equipo1[5], equipo2[5];
    int i = 0, empates = 0;
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese los goles del equipo 1 del partido %d: ", i+1);
        scanf("%d", & equipo1[i]);
        
        printf("Ingrese los goles del equipo 2 del partido %d: ", i+1);
        scanf("%d", & equipo2[i]);
    
        if(equipo1[i] == equipo2[i])
        {
            empates++;
        }
    }
    
    printf("\nLos equipos 1 y 2 empataron %d veces", empates);
    
    return 0;
}





