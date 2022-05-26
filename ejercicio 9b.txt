#include <stdio.h>
  
int main()
{
    int equipo1[10], equipo2[10];
    int i = 0, empates = 0, ganados1 = 0, ganados2 = 0;
    
    for(i=0; i<10; i++)
    {
        printf("Ingrese los goles del equipo 1 del partido %d: ", i+1);
        scanf("%d", & equipo1[i]);
        
        printf("Ingrese los goles del equipo 2 del partido %d: ", i+1);
        scanf("%d", & equipo2[i]);
    
        if(equipo1[i] == equipo2[i])
        {
            empates++;
        }
        
        if (equipo1 [i] == equipo2[i])
        {
            ganados1++;
            ganados2++;
        }
        else
        {
            if(equipo1[i] > equipo2[i])
            {
                ganados1 ++;
            }
            else
            {
                ganados2 ++;
            }
        }
        
    }
    
    if (ganados1 == ganados2)
    {
        printf("Los equipos 1 y 2 empataron");
    }
    else
    {
        if( ganados1 > ganados2)
        {
            printf("El equipo ganador es el 1");
        }
        
        if(ganados2 > ganados1)
        {
            printf("El equipo ganador es el 2");
        }
    }

    printf("\nLos equipos 1 y 2 empataron %d vez/veces", empates);
    
    return 0;
}




