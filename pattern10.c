#include<stdio.h>
void main(){
    int i,j,k=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            k=k+1;
            printf(" %2d",k );
        }
        
        printf("\n");
    }

}