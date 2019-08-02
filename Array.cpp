#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n:\n",n);
	scanf("%d",&n);
	
	int a[n];
	for(int i=0; i<n; i++){
		printf("nhap phan tu:\n");
		scanf("%d",&a[i]);
	}
	int min, min1, max1;
	int max;
	min=a[0];
	max=a[0];
	
	for(int i =0; i<n; i++){	
		if(min>a[i]){
		min=a[i];}	
	if(max<a[i]){
		max=a[i];	
	}
}
	max1=a[0];
	min1=a[0];
	for(int i=1; i<n; i++){
		if(min==a[0]){
			min1=a[1];
		}
		if(max==a[0]){
			max1=a[1];
		}
			if(max1 < a[i] && a[i] < max){
			max1 = a[i];
		}
		if(min1 > a[i] && a[i] > min){
			min1 = a[i];
		}
		}
	printf("min=: %d\n",min);
	printf("max=: %d\n",max);
	printf("min1=:%d\n",min1);
	printf("max1=:%d\n",max1);
	
	
	return 0;
}
