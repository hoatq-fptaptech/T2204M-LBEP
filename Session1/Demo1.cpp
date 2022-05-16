#include <stdio.h>

int main(){
	
	// input a
	int a;
	printf("NHap a =");
	scanf("%d",&a);
	
	// input b
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	// logic so sanh a > b ..
	if(a>b){
		// yes
		printf("Max %d",a); 
	}else{
		// no
		if(a==b){
			// yes
			printf("2 so bang nhau");
		}else{
			//no
			printf("Max %d",b);
		}
	}
}

