#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<0);
	
	if(n==0){
		printf("So can tim: 0");
	}else if(n==1 || n==2){
		printf("So can tim: 1");
	}else{
		int x1=0,x2=1,x3=1;
		int i=3;
		while(i<=n){
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
			i++;
		}
		printf("So can tim: %d",x3);
	}
}
