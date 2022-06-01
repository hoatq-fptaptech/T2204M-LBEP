#include <stdio.h>
int timMax(int n,int arr[]){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
bool checkSNT(int n){
	if(n<2) return false;
	if(n==2 || n== 3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int timSNTMin(int n,int arr[]){
	int m = timMax(n,arr);
	for(int i=m+1;true;i++){
		if(checkSNT(i)){
			return i;
		}
	}
}
int main(){
	
}
