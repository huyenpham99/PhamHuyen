//nhap vao 2 chuoi s1, s2 kiem tra chuoi s2 co nam trong chuoi s1 khong
#include <stdio.h>
#include <string.h>
int main(){
char s1[10],s2[10];
int n;

printf("nhap xau thu 1:");
gets(s1);
printf("nhap xau thu 2:");
gets(s2);

if(*strstr(s1,s2)==s2[0])
printf("chuoi thu 2 nam trong chuoi thu 1:");
else
printf("chuoi thu 2 ko nam trong chuoi thu 1:");
getch();
}
