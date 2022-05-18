#include <stdio.h>
int main(){
	// input n
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	if(n < 2){
		printf("%d khong phai so nguyen to",n);

	}else if(n == 2 || n== 3){
		printf("%d la so nguyen to",n);

	}else{ // n >=4
		int ut3 = 0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				ut3++;
				printf("%d khong phai so nguyen to",n);
				break;
			}
		}
		if(ut3 == 0){
			printf("%d la so nguyen to",n);	
		}
	}	
	
}
