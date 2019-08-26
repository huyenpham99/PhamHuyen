//tinh dien tich cac hinh
#include<stdio.h>
#include<math.h>
float dientich_Hinhchunhat(float a, float b);
float dientich_Hinhtron(float r);
float dientich_Tamgiac(float a, float b, float c);
float dientich_Hinhthang(float a, float b, float h);

int main(){
	float a,b,c;
	int choose=0;
	float h; 
	float r,s;
	printf("nhap canh a:\n"); scanf("%f",&a);
	printf("nhap canh b:\n"); scanf("%f", &b);
	printf("nhap canh c:\n"); scanf("%f", &c);
	printf("nhap chieu cao h h=\n"); scanf("%f", &h);
	printf("nhap ban kinh r:\n"); scanf("%f", &r);
	float pi=3.14;
	do{
		printf("1. tinh dien tich hinh chu nhat\n");
		printf("2. tinh dien tich hinh tron\n");
		printf("3. tinh dien tich tam giac\n");
		printf("4. tinh dien tich hinh thang\n");
		printf("5. thoat\n");
		printf("===============\n");
		printf("choose=\n"); scanf("%d", &choose);
		switch(choose){
			case 1: printf("dien tich hinh chu nhat: %.2f\n",dientich_Hinhchunhat( a,b));  break;
			case 2: printf("dien tich hinh tron %.2f\n",dientich_Hinhtron( r));  break;
			case 3: printf("dien tich hinh tam giac:\n",dientich_Tamgiac( a,b,c));  break;
			case 4: printf("dien tich hinh thang: %.2f\n",dientich_Hinhthang( a,b, h));  break;
			case 5: printf("Exit. ");  break;
			default : printf(" Nhap sai , moi ban nhap lai!"); break;
		}
	} while(choose !=5);
}
float dientich_Hinhchunhat(float a, float b){
	return a*b;
}
float dientich_Hinhtron(float r){
	float pi=3.14;
	return pi*r*r;
}
float dientich_Tamgiac(float a, float b, float c){
		float s;
		float p;
		if(a+b>c && b+c>a && a+c>b){
			float cv= a +b+c;
			float p=cv/2;
			float s= sqrt(p*(p-a)*(p-b)*(p-c));
		}else{
			printf("day khong phai tam giac\n");
		//	printf("=======================\n");
		}
			return  sqrt(p*(p-a)*(p-b)*(p-c)) ;
	}
float dientich_Hinhthang(float a, float b, float h){
	float s=0.5*h*(a+b);
	return s;
	
}
