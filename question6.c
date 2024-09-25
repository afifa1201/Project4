#include<stdio.h>
int main(){
int i,j;
int num=5;
int rows=5;
    
    for (i=1;i<=num;i++) {
       
        for (j=1;j<=i;j++) {
            printf("%d ", j);
        }
        for (j=i;j>=1;j--) {
            printf("%d ", j);
        }

       
        printf("\n");
    }
}


