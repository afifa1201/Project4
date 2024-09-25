#include<stdio.h>
int main(){
	int rows=5;
	int num=1;
	int i,j;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--){
		for (j=1;j<=i;j++){
			if (j%2!=0) {
                printf("1 ");
            } else {
                printf("0 ");
		}
		
	}
	printf("\n");
}
}
