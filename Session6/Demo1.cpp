#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	
	// tim so lon nhat trong cac so nho hon x
	int x0 = x;
	for(int i=0;i<n;i++){ // tim 1 so bat ky nho hon x
		if(arr[i]<x){
			x0 = arr[i];
			break;
		}
	}
	if(x0 == x){
		printf("khong co so nao nho hon x\n");
	}else{
		for(int i=0;i<n;i++){ // tim so lon nhat trong cac so nho hon x
			if(arr[i]>x0 && arr[i]< x){
				x0 = arr[i];
			}
		}
	}
	
	// tim so tiem can tren cua x
	int x1 = x;
	for(int i=0;i<n;i++){
		if(arr[i]>x){
			x1 = arr[i];
			break;
		}
	}
	if(x1 == x){
		printf("khong co so nao lon hon x\n");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<x1 && arr[i]>x){
				x1 = arr[i];
			}
		}
	}
	
	if(x0 == x && x1 == x){
		printf("Khong co so gan nhat");
	}else if(x0 == x){
		printf("So can tim: %d",x1);
	}else if(x1 == x){
		printf("So can tim: %d",x0);
	}else{
		if(x1 - x < x - x0){
			printf("So can tim: %d",x1);
		}else if(x1 - x == x - x0){
			printf("So can tim: %d %d",x0,x1);
		}else{
			printf("So can tim: %d",x0);
		}
	}
}
