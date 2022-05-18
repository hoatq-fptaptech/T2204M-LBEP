#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	// chay xuoi
//	int i=1,max =0;
//	while(i<n){
//		if(i%2==0 && i%3==0){
//			max = i;
//		}
//		i++;
//	}
	
	// chay nguoc
	int max = 0;
//	while(i>0){
//		if(i%2==0&&i%3==0){
//			max = i;
//			break;
//		}
//		i--;
//	}
	
	for(int i=n-1 ;i>0;i--){
		if(i%2==0&&i%3==0){
			max= i;
			break;
		}
	}
	
	printf("Max: %d",max);
}
