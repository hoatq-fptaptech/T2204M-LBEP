#include <stdio.h>
int main(){
	// S = 1 + 2 + ... + 1000
	int x = 1,S = 0;
	while(x <= 1000){
		S += x;
		x++;
	}

	int S2 = 0;
	int i;
	for( i=1;i<=1000;i++){
		S2 +=i;
	}
	
	printf("x = %d\n",x);//1001
//	printf("i = %d\n",i);// ERROR
	if(x > 10){
		int y  = 20;
		y++;
	}
	
	for(int i=0,j=0;i<100&&j<50;i++,j++){
		printf("i = %d  j= %d\n",i,j);
	}
	
	int tk = 4000;
	int y;
	for(y=0;tk < 1000000;y++)
	// day ko phai trong vong lap nua
	{
		tk += tk*8/100;
	}
	
}
