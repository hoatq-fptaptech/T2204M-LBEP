#include <stdio.h>
#include <math.h>
int absMin(int n,int arr[]){
	int min = abs(arr[0]);
	for(int i=0;i<n;i++){
		if(abs(arr[i]) < min){
			min = abs(arr[i]);
		}
	}
	return min;
}
int UCLN(int n,int arr[]){
	int min = absMin(n,arr);// so co gia tri tuyet doi nho nhat
	for(int i=min;i>0;i--){
		int dem = 0;
		for(int j=0;j<n;j++){
			if(arr[j]%i!=0){
				dem++;
				break;
			}
		}
		if(dem == 0){
			return i;
		}
	}
}
int main(){
	
}
