#include <stdio.h>
int tinhtong(int a,int b){
	return a+b;
}

int timMaxOfArray(int n,int arr[]){// tham so thu 2 la 1 array
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int timMaxOfArray2(int n,int *arr){// tham so thu 2 la 1 array
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
void nhapMang(int n,i  []){
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void inMang(int n,int arr[]){
	printf("In mang:");
	for(int i=0;i<n;i++){
		printf("%d  ",&arr[i]);
	}
	printf("\n");
}
void sortAsc(int n,int arr[]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]> arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void sortDesc(int n,int arr[]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j] < arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void sort(int n,int arr[],bool type){
	if(type){
		sortAsc(n,arr);
		return;
	}
	sortDesc(n,arr);
}
int main(){
	int t = tinhtong(4,6);
	int mangxyz[5] = {4,1,5,6,2};
	int m = timMaxOfArray(5,mangxyz);// viet ten cua array
	printf("m = %d\n",m);
	nhapMang(5,mangxyz);
	inMang(5,mangxyz);
}
