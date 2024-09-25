#include<stdio.h>
int main(){
	int rows=5;
	int num=5;
	int i,j;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=num;i>=1;i--){
		for(j=i;j<=num;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
