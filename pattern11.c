#include<stdio.h>
void main(){
    int i,j,k=0;
    for(i=1; i<=5; i++){
        for(j=i; j>=1; j--){
            printf(" %2d",j );
        }
        
        printf("\n");
    }

}