#include<stdio.h>
void main(){
    int i,j,s,n=5;
    for(i=1; i<=n; i++){
        for(s=n-1; s>=i; s--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%2d",j );
        }
        
        printf("\n");
    }

}