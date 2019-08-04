//tinh tong 100 so le dau tien
#include<stdio.h>
int main(){
	int i;
	int s=0;
	int n;
	do{
		
}
	scanf("%d",&n);
	for(int i=1; i<=n; i+=2){
		s+=i;
	}
	printf("tong 100 so le dau tien la:%d\t",s);
	return 0;
}
