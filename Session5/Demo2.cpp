#include <stdio.h>
int main(){
	int i,j,temp,arr[5]={23,90,9,25,16};
	
	for(i=0;i<5-1;i++){
		for(j=0;j<5-i-1;j++){
			if(arr[j]> arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	printf("mang sau khi sap xep:");
	for(int i=0;i<5;i++){
		printf("%d   ",arr[i]);
	}
	// nhap 1 mang n so nguyen, sap xep theo thu tu lon -> be  
}
