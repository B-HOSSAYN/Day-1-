// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float K;
   float C;
   printf("veiller entrer la température ");
   scanf("%f",&C);
   K= C + 273.15 ;
   printf("kelvin %.2f",K);
