#include <stdio.h>
int main(){
	
	for(int i=1;i<=10;i++){
		printf("----------------\n");
		printf("Before continue i = %d\n",i);
		
		if(i==5){
			continue;
		}
		
		printf("After continue i = %d\n",i);
	}
	
}
