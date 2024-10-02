// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>

int main()
{
    
float a,b,c;
float moyenne;

printf("Entrer le premiere nombre ");
scanf("%f",&a);
printf("Entrer le deuxieme nombre ");
scanf("%f",&b);
printf("Entrer le troixieme nombre ");
scanf("%f",&c);
moyenne =(a+b+c)/3;

printf("Le moyenne ponderee est :%.2f",moyenne);


return 0;
}