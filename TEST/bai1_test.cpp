//bai 1
#include<stdio.h>

int Sum(int a, int b){
	int T;
	T=a+b;
	return T;
}
int Substraction(int a, int b){
	int H;
	H=a-b;
	return H;
}
int Multiplication(int a, int b){
	int N;
	N=a*b;
	return N;
}
float Division(int a, int b){
	float C;
	C=(float)a/(float)b;
	return C;
}

int main(){
		int a,b;
	printf("input a=\n");
	scanf("%d",&a);
	printf("input b=\n");
	scanf("%d",&b);
	
	int T=Sum(a,b);
	printf("Sum: %d\n",T);
	
	int H=Substraction(a,b);
	printf("Substraction: %d\n",H);
	
	int N=Multiplication(a,b);
	printf("Multiplication: %d\n",N);
	
	float C= Division(a,b);
	printf("Division: %f\n",C);
	
	return 0;
}
