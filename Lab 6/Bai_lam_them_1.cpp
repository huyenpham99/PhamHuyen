//viet chuong trinh tinh giai thua cua so n nhap tu ban phim
#include<stdio.h>
int giaiThua(int n);

int main(){
	int n;
	printf("nhap so n:\n");
	scanf("%d", &n);
	printf("giai thua cua so %d la: %d\n",n, giaiThua(n));
	
}
int giaiThua(int n){
	int giaithua=1;
	for(int i=1; i<n; i++){
		giaithua=giaithua*i;
	}
	return giaithua;
}
