#include<stdio.h>
 void nhap(int a[], int n){
	for(int i=0; i<n;i++){
		printf("nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
	}
}

int tim_max(int a[], int n){
int max=a[0];
for(int i=0; i<n; i++){
	if(max<a[i]){
		max=a[i];	
	}
}
return max;
}
int tim_so_gan_lon_nhat(int a[],int n){
	int max=a[0];
	for(int i=0; i<n;i++){
		if(max<a[i]){
		max=a[i];
		}
	}
		int max1=a[0];
		for(int i=1; i<n; i++){
		if(max==a[0]){
			max1=a[1];
		}
		if(max1 < a[i] && a[i] < max){
			max1 = a[i];
		}
	}

	return max1;
}



int main(){
	int n;
	int max;
	printf("nhap so phan tu:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("nhap so phan tu:\n");
	scanf("%d",&a[i]);
}
	printf("phan tu lon nhat cua mang:%d",tim_max(a,n));
	printf("phan tu gan lon nhat cua mang:%d",tim_so_gan_lon_nhat(a,n));
	return 0;
}
