//nhap vao mang n so va in ra gia tri trung binh cong
#include<stdio.h>
	int main(){
		int n;
		printf("nhap so n=:\t");
		scanf("%d",&n);
		int a[n];
		float TB=0,S=0;
		for(int i=0; i<n;i++){
			printf("nhap phan tu:\t");
			scanf("%d",&a[i]);
			S+=a[i];

	}
			TB=S/n;
		printf("trung binh cong cua mang la: %f\t",TB);
		 
		return 0;
		
	}
