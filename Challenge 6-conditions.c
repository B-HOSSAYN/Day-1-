// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int N;
    printf("entrer le nombre N ");
    scanf("%d",&N);
    if(N>0)
          printf("le nombre est positif");
    else if(N<0)
          printf("le nombre est negatif");
    else 
          printf("le nombre est nul");
         
    return 0;
}