#include<stdio.h>
#include<math.h>
	int main(){
		
		int n, i, s=0;
		 printf("nhap so n:\n",n);
		 scanf("%d",&n);
		 
		 for(i=1;i<n;i++){
		 	if(n%i==0)
		 		s+=i;
			 } if(s==n){
		 	printf("%d la so hoan hao",n);
		 }else{
		 	printf("%d khong la so hoan hao",n);
		 }
		
	
		return 0;
		
	}
