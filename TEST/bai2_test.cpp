//bai2
#include<stdio.h>
void nhap(int a[100], int n){
	
	for(int i=0;i<10;i++){
		printf("input a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void dao(int a[100], int n){
	for(int i=0;i<5;i++)
    {
      int temp=a[i];
         a[i]=a[9-i];
         a[9-i]=temp; 
   }
}
void xuat(int a[100], int n){
	for(int i=0; i<10;i++){
		printf("%3d",a[i]);
	}
}



int main(){
	int a[10];
	int n;
	printf("\ninput n intergers:\n ");
    scanf("%d",&n);
    nhap(a,n);
	printf("\narray when input:\n");
	xuat(a,n);
	printf("\narray when revered:\n");
	dao(a,n);
	xuat(a,n);
	return 0;
}
