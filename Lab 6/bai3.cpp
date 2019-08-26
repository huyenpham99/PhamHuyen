//xay dung ham void menu()
#include<stdio.h>
#include<stdlib.h>
void nhap(int a, int b);
int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
double div(double a, double b);


int main(){
	int choose;
	int a,b;
				printf("1. Input Number \n");
				printf("a = "); scanf("%d", &a);
				printf("b = "); scanf("%d", &b);
				printf("\n\n\n");
	do{

	printf("***DANH SACH CHUONG TRINH***\n");
	printf("1. Tinh tong\n");
	printf("2. Tinh hieu\n");
	printf("3. Tinh tich\n");
	printf("4. Tinh thuong\n");
	printf("5. Thoat\n");
	printf("\n\n\n");
	printf("Chon:\n"); scanf("%d", &choose);
	switch(choose){	
		case 1: //tinh tong
				printf("2. Tinh tong \n");
				printf("Result: %d + %d = %d \n", a, b, sum(a, b));
				printf("\n\n\n");
				break;
		case 2: 
				printf("2. Tinh hieu \n");
				printf("Result: %d - %d = %d \n", a, b, sub(a, b));
				printf("\n\n\n");
				break;
		case 3: 
				printf("2. Tinh tich \n");
				printf("Result: %d * %d = %d \n", a, b, multi(a, b));
				printf("\n\n\n");
				break;
		case 4:
				printf("2. Tinh thuong \n");
				printf("Result: %ld / %ld = %ld \n", a, b, div(a, b));
				printf("\n\n\n");
				break;
		case 5: 
				printf("Exit. \n");
				break;
		default:
				printf("Nhap sai, moi ban nhap lai!");
				break;
	} 
	}while(choose!=5);
	}
void nhap(int a, int b){
	printf("nhap so a:\n");	scanf("%d", &a);
	printf("nhap so b:\n");	scanf("%d", &b);
	printf("\n\n\n");	
}
int sum(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int multi(int a, int b){
	return a*b;
}
double div(double a, double b){
	return a/b;
}


