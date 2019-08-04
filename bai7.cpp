//tinh giai thua cua n! khi biet  n! = 1.2.3.4…n
#include<stdio.h>
	int main(){
		int n;
		int i;
		int gt;
		printf("nhap n=",n);
		scanf("%d", &n);
		if(n==0){
			printf("ket qua %d! la 1");
			return 0;
		}
		for(i=1; i<=n; i++){
			gt*=i;
		}
		printf("%d! co ket qua la %d:",n ,gt);
	return 0;	
	}
