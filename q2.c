#include<stdio.h>
int main(){
	int rows=4;
	 int num=11; 
	 int i,j;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
