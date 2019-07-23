#include<stdio.h>
 int main() {
 	int A, B,C;
 	
 	printf("nhap so A=\n", A);
 	scanf("%d", &A);
 	
 	printf("nhap so B=\n", B);
 	scanf("%d", &B);
 	
 	printf("nhap so C=\n", C);
 	scanf("%d", &C);
 	
 	if((A>B) && (A>C)){
 		if(B>C){
 			printf("So lon nhat la: %d va so nho nhat la: %d", A, C);
		}else { 
		 printf("So lon nhat la: %d va so nho nhat la: %d", A,B);
		 }
	}else if((A>B) &&(A<C)){
		printf("So lon nhat la: %d va so nho nhat la: %d", C,B) ;
	}else if((A<B)&&(A>C)){
		printf("so lon nhat la: %d va so nho nhat la: %d",B,C );
	}else if((A<B)&&(B>C)){
		printf("so lon nhat la: %d va so nho nhat la: %d",B,A);	
	} else  
		printf("so lon nhat la: %d va so nho nhat la: %d",C,A);

	 return 0;
 	
 }
 
