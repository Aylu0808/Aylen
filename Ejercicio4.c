#include <stdio.h>



int main()
{
    
int A[10];
    
int i = 0;

    

printf("Ingrese 10 valores:\n");
    

for(i=0; i<10; i++)
    {
        
scanf("%d", &A[i]);
    
}
    

for(i=0; i<10; i++)
    {
        
if(A[i] % 2 == 0)
   {           
A[i] = 0;
        
}
    
} 
    

for(i=0; i<10; i++)
    {
        
printf("%d  ", A[i]);
    
}
   
    
return 0;

}
