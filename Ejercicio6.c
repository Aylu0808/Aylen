
#include <stdio.h>



int main()
{
    

int DNI[10];
    
float nota[10];
    
int i = 0;

    

for(i=0; i<10; i++)
    {
        
printf("Ingrese el DNI del estuadiante: ");
        
scanf("%d", &DNI[i]);
        
        

printf("Ingrese la calificacion del estudiante: ");
        
scanf("%f", &nota[i]);
    
}
    

for(i=0; i<10; i++)
    {
        
if(nota[i] >= 6)
        {
            
printf("%d\n", DNI[i]);
        
}
    
}
    
return 0;

}



