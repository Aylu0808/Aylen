
#include <stdio.h>

int main()
{
    
float A[5];
    
int i;
    
    

printf("Ingrese 5 numeros flotantes:\n");
    

for(i=0; i<5; i++){
 
       
scanf("%f", &A[i]);
    
}
    
for(i=0; i<5; i++){
        
printf("%.2lf ", A[i]);
    
}
    

printf("\n");
    

for(i=0; i<5; i++){
     
printf("%.2lf ", A[i]*1.65);
    
}
    

return 0;

}


