#include <stdio.h>

int main() {
    int i,j;
    int rows = 4;
    for (i=1;i<=rows;i++) {
    	if(i==1||i==3){
    		printf("* * * * * \n");
		}else if (i==2){
			printf("*       * \n");
		}else{
			printf("* \n");
		}
    	
        
    }

 
}
