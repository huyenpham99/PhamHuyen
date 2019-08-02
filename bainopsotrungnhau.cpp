#include<stdio.h>
#include <conio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	for(int j=0; j<i; j++){
		while(a[i]==a[j]){
			printf("nhap lai phan tu a[%d]=",i);
			scanf("%d",&a[i]);
	}
	}
	}
	for(int i=0; i<n; i++){
		printf("%d,",a[i]);
		
	}
		return 0;
}

