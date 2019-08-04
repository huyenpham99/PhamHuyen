//nhap vao 2 ma tran 4 3, cong tru 2 ma tran va in ket qua
#include<stdio.h>
int main(){
	int a[4][3];
	int b[4][3];
	for( int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("nhap ma tran a[%d]a[%d]",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for(int x=0; x<4; x++){
		for(int y=0; y<3; y++){
			printf("nhap ma tran b[%d]b[%d]",x,y);
			scanf("%d", &b[x][y]);
		}
	}
	int Sa=0;
	int Sb=0;
	int S=0, H=0;
	for(int i=0; i<4; i++){
		for(int j=0;j<3;j++){
			Sa+=a[i][j];
		}
	}
	for(int x=0; x<4; x++){
		for(int y=0;y<3;y++){
			Sb+=b[x][y];
		}
	}
	S=Sa+Sb;
	if(Sa>Sb){
		H=Sa-Sb;
	} else {
		H=Sb-Sa;
	}
	
	printf("Tong ma tran a: %d\n",Sa);
	printf("Tong ma tran b: %d\n",Sb);
	printf("Tong hai ma tran  %d\n",S);
	printf("Hieu hai ma tran  %d\n",H);
	return 0;
}
