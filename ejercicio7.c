
#include <stdio.h>
int main()
{
float precio [5];
float velocidad [5];
int i = 0;
int mascaro = 0;
int masrapido = 0;
int caro, rapido;
for(i=0; i<5; i++)
{
printf("Ingrese el precio del microprocedador %d:", i+1);
scanf("%f", &precio[i]);
printf("Ingrese la velocidad del microprocesador %d: ", i+1);
scanf("%f", &velocidad[i]);
if(precio[i]> mascaro)
{
mascaro = precio[i];
caro = i;
}
if(velocidad[i] > masrapido)
{
masrapido = velocidad[i];
rapido = i;
}
}
if(rapido == caro)
{
printf("El procesador mas rapido tambien es el mas caro.\n");
}
else
{
printf("El procesador mas caro no es el mas rapido.\n");
}
return 0;
}
