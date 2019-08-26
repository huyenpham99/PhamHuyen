#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int nguoichoi1();
int nguoichoi2();
int main()
{
int tong1,tong2,m,n;
tong1 = tong2 = 0;
srand(time (NULL));
while(tong1<=100&&tong2<=100){
if(tong1<=tong2){
m = nguoichoi1();
tong1 += m;
printf("tong diem nguoi 1 la:%d\n",tong1);
if(tong1==100) printf("nguoi co tong 1 thang\n") ;
}
else {
n = nguoichoi2();
tong2 += n;
printf("tong diem nguoi 2 la: %d\n", tong2);
if(tong1==100) cout << "nguoi 1 thang \n" ;
}

}

}
int nguoichoi1()
{
int tong1,a,b; tong1 = 0;
a = rand()%6+1;
b = rand()%6+1;
printf("xuc xac nguoi 2 la: %d va %d\n", a,b);
tong1 += a+b;
return tong1;
}
int nguoichoi2()
{
int tong2,c,d; tong2 = 0;
c = rand()%6+1;
d = rand()%6+1;

printf("xuc xac nguoi 2 la: %d va %d\n", c,d);
tong2 += c+d;
return tong2;	
}
