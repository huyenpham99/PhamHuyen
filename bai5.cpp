// * * * * *
// *       *
// *       *
// * * * * *
//chieu dai n=5, chieu rong m=4
#include<stdio.h>
int main(){
	int a[5][4];
for(int i=1; i<=4; i++){
	 	for(int j=1; j<=5;j++){
	 		if(i==1 || j==1 || i==4 || j==5){
	 			printf("* ");
			 } else{
			 	printf("  ");
			 }
		 }
	 		 printf("\n");
	 }
	 
	
	return 0;
}
