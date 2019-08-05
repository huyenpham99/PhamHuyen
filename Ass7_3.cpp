#include<stdio.h>
int main(){
	int a[4][3];

	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("nhap ma tran a[%d][%d]:\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran ban vua nhap la:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%3d",a[i][j]);	
		}
			printf("\n");
	}

	printf("ma tran chuyen vi la:\n");
	for(int j=0; j<3;j++){
		for(int i=0; i<4; i++){
				printf("%3d",a[i][j]);
	}
		printf("\n");
	}
	return 0;
}
