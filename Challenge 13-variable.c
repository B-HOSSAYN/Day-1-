#include<stdio.h>
#include<stdlib.h>

int main (){
    int i,S,n;
    float P,M;
    printf("entrer les nombres : ");
    for(i=0;i<10;i++)
        scanf("%d",&n);

    S = 0;
    P = 1;
    for(i=0;i<10;i++){
        S = S + n;
        P = P * n;
    }
    M = S/10;

    printf("la somme des nombres que vous entrer est : %d",S);
    printf("le produit des nombres que vous entrer est : %.2f",P);
    printf("le moyen des nombres que vous entrer est : %.2f",M);


}
