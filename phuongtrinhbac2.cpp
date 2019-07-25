#include<stdio.h>
#include<conio.h>
#include<math.h>

	int main(){
		
		int a,b,c;
		float x1, x2, D;
		
		printf("nhap a:\n",a);
		scanf("%d", &a);
		
		printf("nhap b:\n",b);
		scanf("%d",&b);
		
		printf("nhap c:\n",c);
		scanf("%d", &c);
		
		if(a!=0) {
			D=b*b-4*a*c;
			if(D>0){
				x1=(-b-sqrt(D)/2*a);
				x2=(-b+sqrt(D)/2*a);
				printf("phuong trinh co 2 nghiem phan biet x1=%f va x2=%f",x1,x2);
			}else if(D=0){
				x1=-b/2*a;
				printf("phuong trinh co nghiem kep x1=x2=%f",x1);
			} else{
				printf("phuong trinh vo nghiem");
			}
		} else {
			printf("day khong phai phuong trinh bac 2 do a=0");
		}
		
		return 0;
	}
