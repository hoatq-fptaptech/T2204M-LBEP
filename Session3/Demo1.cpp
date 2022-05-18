#include <stdio.h>
int main(){
	int x ;// nhap tu ban phim 1 so duong ( x > 0)
	
//	printf("Nhap x =");
//	scanf("%d",&x);
//	// chay vong lap: bat nhap lai x neu x <=0
//	while(x <= 0){
//		printf("Nhap x =");
//		scanf("%d",&x);
//	}
	
	do{
		printf("Nhap x =");
		scanf("%d",&x);
	}while(x <= 0);	
	
	printf("x = %d",x);
	
	
	
	
}
