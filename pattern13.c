#include<stdio.h>
void main(){
    int i,j,k,n=5;
    for (int i = 1; i <= n; i++)
     {
        for (int j =n; j > i; j--)
            {
                printf(" ");
            }
        int temp = 1;
        for (int k = 1; k <= i; k++)
            {
                printf("%d", temp);
                temp = temp * (i - k) / (k);
             }
        printf("\n");
 }
}