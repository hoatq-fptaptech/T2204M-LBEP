#include <stdio.h>
int main(){
	int arr[9] = {1,2,5,7,11,16,21,32,35};
	int search = 35;
	int lo = 0;
	int hi = 8;
	bool flag = false;
	while(lo <= hi){
		int mid = (lo + hi)/2;
		if(search == arr[mid]){
			printf("Da tim thay tai %d\n",mid);
			flag = true;
			break;
		}else if(search > arr[mid]){
			lo = mid + 1;
		}else if(search < arr[mid]){
			hi = mid - 1;
		}
	}
	if(flag == false){
		printf("Not Found....");
	}
}
