#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%2d",j );
        }
        for(k=i-1; k>=1;k--){
            printf("%2d",k);
        }
        
        printf("\n");
    }

}