#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{
	char name[50];
	int age;
	float mark;
}SV;
int main(){
	struct SinhVien sv1;// int x;
	printf("Nhap ten sinh vien:");
	scanf("%s",sv1.name);
	printf("Nhap tuoi sinh vien:");
	scanf("%d",&sv1.age);
	printf("Nhap diem sinh vien:");
	scanf("%f",&sv1.mark);
	SV sv2;
	memcpy(&sv2,&sv1,sizeof(SV));// sv2 = sv1;
	SV t2204m[25];
	for(int i=0;i<25;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",t2204m[i].name);
		printf("Nhap tuoi sinh vien:");
		scanf("%d",&t2204m[i].age);
		printf("Nhap diem sinh vien:");
		scanf("%f",&t2204m[i].mark);
	}
	
	SV *apt;
	apt = (SV *)malloc(10*sizeof(SV));
	printf("Nhap ten sinh vien:");
//	scanf("%s",apt[0].name);
	scanf("%s",apt->name);
	// apt[i].name <=> (apt+i)->name
	// apt[i].mark <=> (apt+i)->mark
}
