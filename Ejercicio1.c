
#include <stdio.h>


int main()
{


    
int A [5], i;
    

printf("Ingrese 5 valores:\n");
   
    

for(i=0; i<5; i++){
        
	scanf("%d",&A[i]);
    
}
    
for(i=0; i<5; i++){
       
 	printf("%d ",A[i]);
    
}
    

printf("\n");
   
    

for(i=4; i>=0; i--){
        
	printf("%d ",A[i]);
    
}

    
return 0;

}



