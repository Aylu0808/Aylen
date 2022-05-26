#include <stdio.h>

int main(){
	
	int A[5];
	int i=0, creciente=0, decreciente=0;
	
	for(i=0; i<5; i++)
	{
		printf("Ingrese 5 valores: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<4; i++)
	{	
		if(A[i] < A[i+1])
		{
			creciente++;
			printf("creciente %d\n", creciente);
		}
		
		if(A[i] > A[i+1])
		{
			decreciente++;
			printf("decreciente %d\n", decreciente);
		}
		
	}
	
	if(creciente != 4 && decreciente != 4)
	{
		printf("El vector no es monotono");
		
	}
}





