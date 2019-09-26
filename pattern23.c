#include<stdio.h>
void main(){
    int i,k;
   for(i=1; i<=5; i++){
       for(k=5; k>=1;k--){
           if(i>=k){
           printf("%d",i);
           }
           else
           {
               printf("1");
           }
           

       }
        
       printf("\n");
   }
}