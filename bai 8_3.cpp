//tim hang co tong gia tri lon nhat trong ma tran 4x4
#include<stdio.h>

void nhap(int a[][4],int m ,int n){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		printf("nhap phan tu a[%d][%d]", i,j);
		scanf("%d", &a[i][j]);
		}
	}
}

void xuat( int a[][4],int m, int n){
	for(int i=0;i<4; i++){
		for(int j=0; j<4;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
}
int tinh_tong_hang(int a[4][4], int m, int n ){
for(int i=0;i<4;i++){
		int S1 = 0;
		for(int j=0;j<4;j++){
			S1+=a[i][j]	;	
		}
		printf("tong hang%d=%d\t",i,S1);
}

}
int tim_max(int a[4][4], int m, int n){
		int max=0;
	for(int i=0;i<4;i++){
		int S1 = 0;
		for(int j=0;j<4;j++){
			S1+=a[i][j]	;	
		}
		if(i==0){
			max=S1;
		}
		if(max < S1){
			max=S1;
		}
	}
		return max;	
}

	int main(){
	int a[4][4];
	int m,n;
	for(int i=0;i<4; i++){
		for(int j=0; j<4;j++){	
		printf("nhap phan tu a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
		}
	}
	xuat(a,m,n);
	printf("tong hang:\t",tinh_tong_hang(a,m,n));
	tim_max(a,m,n);
	printf("tong hang lon nhat la:%d\n", tim_max(a,m,n));

	
	return 0;
}

