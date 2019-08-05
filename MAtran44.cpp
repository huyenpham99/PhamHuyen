//nhap vao ma tran 44, tinh duong cheo cua ma tran do
#include<stdio.h>

int main (){
int a[4][4];
	 for(int i=0; i<4; i++){
	 	for(int j=0; j<4;j++){
	 		printf("nhap a[%d]a[%d]=\n",i,j);
	 		scanf("%d", &a[i][j]);
		 }
	 }
		float S=0;
		float TB=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%3d",a[i][j]);
				if(i==j){
			S+=a[i][i];
		}

	}
		printf("\n");
}
		TB=S/4;
		printf("tong duong cheo chinh:%f\n",S);
		printf("trung binh cong dong cheo :%f\n",TB);
	return 0;
}
