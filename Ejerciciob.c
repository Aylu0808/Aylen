
#include <stdio.h>
  


int main()
{
    
int edad [5];
    
float sueldo [5];
    
int i = 0;
    
int edadmayor = 0;
    
int sueldomayor = 0;
    
int posedad, possueldo;
    
    

for(i=0; i<5; i++)
    {
        
printf("Ingrese la edad de la persona %d: ", i+1);
        
scanf("%d", & edad[i]);
        
        

printf("Ingrese el sueldo de la persona %d: ", i+1);
        
scanf("%f", & sueldo[i]);
    
}
    

for(i=0; i<5; i++)
    {
        
if(edad[i] > edadmayor)
        {
            
edadmayor = edad[i];
            
posedad = i;
        
}
        
if(sueldo[i] > sueldomayor)
        {
            
sueldomayor = sueldo[i];
            
possueldo = i;
        
}     
    
}
    

printf("La persona de más edad es la N: %d \n", posedad);
    
printf("La persona con mayor sueldo es la °: %d \n", possueldo);
    
    

if(posedad == possueldo)
    {
        
printf("La persona de más edad tambien tiene el mayor sueldo.\n");
    
}
    
return 0;

}





