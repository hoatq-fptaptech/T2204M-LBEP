int tinhtong(int a,int b){
	int c = a+b;
	return c;
}

int tinhhieu(int a,int b){
	return a-b;
}
int chuvi(int a, int b,int c){
	return a+b+c;
}
float dientich(int a,int b,int c){
	float p = (float)chuvi(a,b,c)/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
bool kiemtratamgiac(int a,int b,int c){
	if(a+b>c && a+c>b && b+c>a){
		return true; // ham se dung tai day
	}
	return false;
	
	/// viet gi cung ko chay
}
// kiem tra 1 so nguyen co phai so nguyen to hay khong 
bool ktSNT(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n== 3){
		return true;
	}

	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void menu(){
	printf("Danh sach cac mon an:\n");
	printf("1. Lau tu xuyen\n");
	printf("2. Lau thai\n");
	return;
}
