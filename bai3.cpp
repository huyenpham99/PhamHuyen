//nhap vao 2 so x,y va doi gia tri 2 bien cho nhau
#include<stdio.h>
	int main(){
		int X,Y,tg;
		printf("nhap so X=",X);
		scanf("%d",&X);
		printf("nhap so Y=",Y);
		scanf("%d",&Y);
		tg=X;
		X=Y;
		Y=tg;
		printf("gia tri sau khi doi cho la:%d,%d",X,Y);
		return 0;
	}
		
