#include <stdio.h>
int main(){
	int S = 4000;
	int y = 0;
	while(S < 1000000){
		// yes
		S = S + S*8/100;
		y++;
	}
	// no
	printf("y: %d",y);
}
