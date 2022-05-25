#include <stdio.h>
#include <math.h>
#include "demofunction.h"
int main(){
	int x = 10,y=20;
	int z = tinhtong(x,y);
	int k = tinhhieu(x,y);
	printf("z = %d\n",z);
	printf("k = %d\n",k);
	do{
		printf("nhap x=");
		scanf("%d",&x);
		printf("nhap y=");
		scanf("%d",&y);
		printf("nhap z=");
		scanf("%d",&z);
	}while(!kiemtratamgiac(x,y,z));
	
	if(kiemtratamgiac(4,5,6)){
		float dt = dientich(4,5,6);
		printf("Dien tich: %f\n",dt);
	}
	menu();
}
