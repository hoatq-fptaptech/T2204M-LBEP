#include <stdio.h>
#include <math.h>
int main(){
	
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+c > b && b+c > a){
		int p;
		p = a+b+c;
		
		float p2;
		p2 = (float)p/2;
		printf("Nua chu vi p2 = %f\n",p2);
		float s;
		s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		
		printf("Chu vi: %d va dien tich: %f",p,s);
	}else{
		printf("Day khong phai 3 canh tam giac");
	}	

}
