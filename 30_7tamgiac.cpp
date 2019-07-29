#include<stdio.h>
#include <math.h>
 int main(){
 	 int a,b,c;
 	 bool check =true;
 	while(check==true){
	 
 	printf("nhap canh a=\n",a);
 	scanf("%d",&a);
 	printf("nhap canh b=\n",b);
 	scanf("%d",&b);
 	printf("nhap canh c=\n",c);
 	scanf("%d",&c);
 	
		if(a+b>c && a+c>b && b+c>a){
	check = false;
	printf("day la mot tam giac");
} else{
	printf("nhap sai, nhap lai");
}
}
 	return 0;
}

