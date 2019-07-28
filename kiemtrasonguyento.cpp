#include<stdio.h>
#include<math.h>
int main(){
	
	int i,n;
	int dem;
	printf("nhap so n:\n",n);
	scanf("%d",&n);
			if(n<2){
		printf("%d khong la so nguyen to",n);
			}	
			if(n==2){
		printf("%d la so nguyen to chan duy nhat ",n);
			}
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			printf("%d khong la so nguyen to\n",n);
			dem=1;
			break;
		}		
	if(dem==0){
		printf("%d la so nguyen to\n",n);
	}
}	
	return 0;
}
