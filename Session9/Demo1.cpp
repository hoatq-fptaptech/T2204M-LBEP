#include <stdio.h>
#include <string.h>
int main(){
	char arrs[10][100];
	printf("Nhap cac chuoi:\n");
	for(int i=0;i<10;i++){
		scanf("%s",arrs[i]);
	}
	
	char s_max[100];
	strcpy(s_max,arrs[0]);// s_max = arrs[0]
	
	for(int i=0;i<10;i++){
		if(strlen(s_max) < strlen(arrs[i])){
			strcpy(s_max,arrs[i]);
		}
	}
	
	printf("Chuoi co do dai lon nhat: %s",s_max);
}
