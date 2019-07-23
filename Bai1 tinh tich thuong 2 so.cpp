#include<stdio.h>
 int main(){
 	
 	float A,B;
 	printf("nhap so A=\n",A);
 	scanf("%f",&A);
 	
 	printf("nhap so B=\n",B);
 	scanf("%f",&B);
 	if(B!=0){
 	 if(A>B) {
 	 	printf("Thuong hai so A/B la:%f",A/B);
	  } else {
	  	printf("tich hai so A va B la:%f",A*B);
	  }
	  }
	  else 
	  {
	  	printf("khong thoa man dieu kien cua b, moi nhap lai");
	  }
 	return 0;
 	
 }
 //Pham Thi Huyen TH1907010
