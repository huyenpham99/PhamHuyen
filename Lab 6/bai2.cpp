//nhap vao so nguyen : inputNumber
//kiem so co phai so nguyen to void checkNumber
//nhap so nguyen tu ban phim va kiem tra xem co phai so nguyen to 
//cho phep nguoi dung lap di lap lai den khi nao muon dung(dung vong lap)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool checkNumber(int n);

int main(){
	char choise='y';
	while(choise=='y' ||choise== 'Y'){
		printf("khoi lenh thuc thi\n");
		//kiem tra so nguyen to
		int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
	
	if(checkNumber(n)){
		
		printf("%d la so nguyen to\n",n);
		break;
	}
	else{
		printf("%d khong la so nguyen to\n",n);
		break;
	}
	}
	printf("ban co muon thuc hien tiep chuong trinh\n");
	printf("\n\n\n");
	printf("hay chon yes=Y de tiep tuc hoac no=N de ket thuc chuong trinh: \n");
	scanf("%c",&choise);
	choise=getchar();
	fflush(stdin);
	if(choise=='n'|| choise=='N'){
		break;
		
	}

}

}
bool checkNumber(int n){
	if(n<2) return false;
	if(n==2 || n==3)	return true;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}
	}
			return true;
}
