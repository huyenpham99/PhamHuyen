//nhap vao mang n so, va in ra mang do
#include<stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n;i++){
		printf("nhap phan tu:\t");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
	printf(" %3d,",a[i]);	
	}
	return 0;
}
