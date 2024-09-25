#include <stdio.h>
int main() {
    int i,j;
    int rows=5;
    int num=5;
    for (i=0;i<rows;i++) {
        for (j=0;j<rows-i-1;j++) {
            printf(" ");
        }

        for (j=rows-i;j<=rows;j++) {
            printf("%d ",j);
        }

        for (j=rows-1;j>=rows-i;j--) {
            printf("%d ",j);
        }

        
        printf("\n");
    }
    
   
}




