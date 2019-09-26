#include<stdio.h>
void main(){
    int i,j,n=5;
    for(i=5; i>1; i--){
        for(j=i; j>=1; j--){
            printf("%2d",j );
        }
        
        printf("\n");
    }

    for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            printf("%2d",j );
        }
        
        printf("\n");
    }
    
}