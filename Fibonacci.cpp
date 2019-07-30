#include<stdio.h>
#include<math.h>
	int main(){
		long int n;
		printf("nhap so n:",n);
		scanf("%d",&n);
		long int a1=1;
		long int a2=1;
		long int T;
		 if(n==1 ||n==2){
		 	printf("So fibonacci thu %d la 1",n);
		 	return 0;
		 }

		 	for(int i=3;i<=n;i++){
		 		 T=a1+a2;
		 		 a1=a2;
		 		 a2=T;
			 } 	printf("%ld\n",T);
		 return 0;
	}
