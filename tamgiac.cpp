#include<stdio.h>
#include <math.h>
 int main(){
 	 int a,b,c,cv;
 	 double p, s;
 	
 	printf("nhap canh a=\n",a);
 	scanf("%d",&a);
 	printf("nhap canh b=\n",b);
 	scanf("%d",&b);
 	printf("nhap canh c=\n",c);
 	scanf("%d",&c);
 	
 	if(a+b>c && a+c>a && a+c>b) {
 		cv= a + b + c;
 		p = cv/2;
 		s=sqrt((p*(p-a)*(p-b)*(p-c)));
 		printf(" chu vi tam giac la:%d\n",cv);
 		printf("dien tich tam giac la:%lf\n",s);
	 } else{
	 	printf("ba canh khong thoa man la mot tam giac, moi nhap lai");
	 }
 }
 
