//nhap vao mot mang in ra so lon nhat, be nhat
#include<stdio.h>
int main(){
	
	int n;
	printf("nhap n=\t");
	scanf("%d",&n);
	int a[n];
	int max,min;
	for(int i=0; i<n; i++){
		printf("nhap phan tu:\n");
		scanf("%d",&a[i]);
	}
		min=a[0];
		max=a[0];
		for(int i=0; i<n;i++){
			
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	
		}
		
	printf("so lon nhat %d\t",max);
	printf("so nho nhat %d\t",min);
	
	return 0;
}
