#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr;
	//arr = (int *)malloc(10*sizeof(int)); // int arr[10]
	arr = (int *)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	// tim max
	int max = arr[0];
	for(int i=0;i<10;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("max: %d\n",max);
	// nhap them 5 so
	arr = (int *)realloc(arr,15*sizeof(int)); // arr[15]
	for(int i=10;i<15;i++){
		scanf("%d",&arr[i]);
	}
	// tim max
	for(int i=10;i<15;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("max: %d\n",max);
	
	// khong can dung arr
	free(arr); // giai phong o nho
}
