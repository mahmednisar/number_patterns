#include<stdio.h>
void main(){
    int i,j,k;
   for(i=1; i<=5; i++){
       for(k=1; k<=i;k++){
           if(k%2==0){
           printf("0");
           }
           else
           {
               printf("1");
           }
           

       }
        
       printf("\n");
   }

   
}