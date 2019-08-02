#include <stdio.h>
#include<math.h>
int main(){
	int n;
	float TB=0,s=0;
	
	int a[10];
	
	for(int i=1; i<10; i++){
		printf("nhap phan tu:\t");
		scanf("%d",&a[i]);
		s+=a[i];
		
	}
	TB=s/10;
	printf("trung binh cua mang la:%lf",TB);
	return 0;
}
