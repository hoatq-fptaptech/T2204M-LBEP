#include <stdio.h>
#include "demofunction.h"
int main(){
	int x = 15,y= 25,z =20;
	int s = dientich(x,y,z);
	
	int t = 1001;
	if(ktSNT(t)){
		printf("%d la so nguyen to\n",t);
	}else{
		printf("%d khong phai so nguyen to\n",t);
	}
	
}
