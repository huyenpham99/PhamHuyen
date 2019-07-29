#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int m;
	int tg;
	
	printf("nhap so can kiem tra:\n",n);
	scanf("%d",&n);
	tg=0;
	m=n;
	while(m!=0){
		tg=10*tg + m%10;
		m/=10;
	}	if(tg == n)
		printf("%d la so thuan nghich",n);
	else
		printf("%d khong la so thuan nghich",n);
	
	
	return 0;
	
}
