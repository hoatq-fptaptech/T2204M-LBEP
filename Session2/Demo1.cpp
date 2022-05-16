#include <stdio.h>
int main(){
	int x = 10;
	
	if(x >= 10){
		printf("A");
	}else if(x >=5){
			printf("B");
	}else if(x >= 20){
		printf("C");
	}else{
		printf("D");
	}
		
	switch(x + 5+5+5){
		case 5: printf("A");break;
		case 10: printf("B");break;
		case 15: printf("C");break;
		case 20:printf("D");break;
		default: printf("E");
	}
	
	if(x > 10){
		printf("ABC");
	}else{
		printf("DEF");
	}
	
	switch(x>10){
		case true: printf("ABC");break;
		default: printf("DEF");
	}
	
	char ch = 'o';
	
	switch(ch){
		case 'a':printf("A");break;
		case 'o':printf("O");break;
		default: printf("ESC");
	}
}
