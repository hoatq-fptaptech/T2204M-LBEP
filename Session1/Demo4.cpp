#include <stdio.h>
int main(){
	// input n
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	// khai bao i=1,c=0
	int i=1,c=0;
	
	// vong lap dem so luong uoc cua n
	while(i<=n){
		if(n%i==0){ // neu i la uoc cua n
			c++;
		}
		i++
	}
	
	if(c==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai snt",n);
	}
}
