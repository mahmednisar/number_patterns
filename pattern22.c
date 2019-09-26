#include<stdio.h>
void main(){
    int i,k;
   for(i=1; i<=5; i++){
       for(k=1; k<=5;k++){
           if(i==k){
           printf("%d",k);
           }
           else
           {
               printf("0");
           }
           

       }
        
       printf("\n");
   }
}