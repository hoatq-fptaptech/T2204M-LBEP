#include <stdio.h>
#include <iostream>

int main(){
	int x = 10;
	
	printf("x = %d\n",x);
	printf("dia chi cua x: ");
	std::cout<< &x;
	
	int *p;
	p = &x;
	printf("\n gia tri cua x = %d\n",*(p));
	x++;
	printf("x = %d\n",x);
	*(p) -=5;
	printf("x = %d\n",x);
	
	int arr[5]; 
	arr[0] = 10;
	*(arr+1) = 20;// arr[1] = 20;
	*(arr+2) = 33;
	*(arr+3) = 44;
	*(arr+4) = 22; // arr[4]
	
	for(int i=0;i<5;i++){
//		printf("%d ",arr[i]);
		printf("%d ",*(arr+i));
	}
}
