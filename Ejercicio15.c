#include <stdio.h>



int main(){

    
int A[10];
    
int i = 0, l = 0, temp = 0 ;
    
   

 for(i=0; i<10; i++)
    {
        
	printf("Ingrese 10 valores: ");
       
	scanf("%d", &A[i]);
   
}
    
	

for (i=1; i<10; i++)
	{
	 	

for (l=0;l<10;l++)
		{
		 	
if (A[l] > A[l+1])	
			{
			   
temp = A[l];	 
			   
A[l]=A[l+1];  
			   
A[l+1]=temp;	
			
}
		
}
 	
}

    

for (i=0;i<10;i++)
    {
        

if(A[i]!=A[i+1])
        {
            

printf("%d  ", A[i]);
        
}
    
}


return=0
}
