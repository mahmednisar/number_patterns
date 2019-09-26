#include<stdio.h>
void main(){
    int i,j;
    for(i=1; i<=5; i++){
        int k=0,d=0;
        for(j=1; j<=i; j++){
            k= i+d;
            printf(" %2d",k );
            d=d+5;
        }
        
        printf("\n");
    }

}