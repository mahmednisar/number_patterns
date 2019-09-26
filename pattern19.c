#include<stdio.h>
void main(){
    int i,j,k;
     for(i=5; i>1; i--){
         for(j=i; j<=5; j++){
            printf("%d",j);
        } 
        for(k=4;k>=i;k--){
            printf("%d",k);

        }
        
        printf("\n");
    }
 for(i=1; i<=5; i++){
      for(j=i; j<=5; j++){
            printf("%d",j);
        } 
        for(k=4;k>=i;k--){
            printf("%d",k);

        }
       
        printf("\n");
    }


   
}