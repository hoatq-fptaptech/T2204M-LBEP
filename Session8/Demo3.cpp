#include <stdio.h>
#include <string.h>
int main(){
	char s1[100],s2[100];
	printf("Nhap s1:");
//	for(int i=0;i<20;i++){
//		scanf("%c",&s[i]);
//	}
	scanf("%s",s1);
	
	printf("nhap s2:");
	scanf("%s",s2);
	
	printf("Chuoi vua nhap S1: %s\n",s1);// hello
	printf("Chuoi vua nhap S2: %s\n",s2);// world
	
	strcat(s1,s2); // s1 = s1+s2;
	printf("Chuoi vua nhap S1: %s\n",s1);// helloworld
	printf("Chuoi vua nhap S2: %s\n",s2);// world
	
	
	strcat(s2,s1); // s2 = s2 + s1;
	printf("Chuoi vua nhap S1: %s\n",s1);// helloworld
	printf("Chuoi vua nhap S2: %s\n",s2);// worldhelloworld
	
	strcpy(s1,s2); // s1  = s2;
	printf("Chuoi vua nhap S1: %s\n",s1);// worldhelloworld
	printf("Chuoi vua nhap S2: %s\n",s2);// worldhelloworld
	
	if(strcmp(s1,s2) == 0){
		printf("Hai chuoi giong nhau \n");
	}else{
		printf("Hai chuoi ko giong nhau \n");
	}
	
	int kt = strlen(s1);// 15
	printf("So luong ky tu cua s1: %d\n",kt);
	
	printf("Ky tu 68 la: %c",68);
	
	// nhap vao 1 chuoi => chuyen chuoi nay thanh in hoa het
	// vi du: t2204MaBc => T2204MABC
	char name[100];
	printf("Nhap ten sinh vien:\n");
	scanf("%s",name);
	int nkt = strlen(name);
	for(int i=0;i<nkt;i++){
		if(name[i] >=97 && name[i]<=122){
			name[i] = name[i] - 32;
		}
	}
	printf("Sau khi chuyen doi: %s\n",name);
}
