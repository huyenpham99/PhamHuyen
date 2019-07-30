#include<stdio.h>
#include<math.h>
int main(){

	 int n,dem;
	 
	printf("nhap so n:",n);
	scanf("%d",&n);

	for(int i=2;i<=n;i++){
		dem=0;
		for(int j=1; j<=i;j++)
			
		if(i%j == 0)
			dem++;

		if(dem==2){
			printf("%d\t",i);
}
}



	return 0;
}
