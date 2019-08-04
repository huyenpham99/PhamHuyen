//viet chuong trinh tinh tong S = 1 + 1/2 + 1/3 + … + 1/N
#include<stdio.h>
#include<math.h>
	int main(){
		float S = 0;
		int n;
		do {
		printf("\nNhap n > 0: ");
        scanf("%d",&n);
    }
		while(n<=0);
			
		for (int i=1; i<=n; i++){
			S+=1/(float ) i;
		}
		printf("tong S=%f",S);
		return 0;
	}
