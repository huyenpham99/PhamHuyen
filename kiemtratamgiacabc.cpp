#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
		printf("nhap so a:\n",a);
		scanf("%d",&a);
		printf("nhap so b:\n",b);
		scanf("%d",&b);
		printf("nhap so c:\n",c);
		scanf("%d",&c);
		
					if(a+b>c && a+c>b && b+c>a){
						printf("day la mot tam giac");
					}else{
						printf("day khong la tam giac, moi nhap lai");
					}
				
			
		
	
	return 0;
	
}
