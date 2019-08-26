//xay dung ham power(int a, int n) nhap vao so nguyen duong a va so nguyen duowng n
//tinh a^n ko dung ham co san
#include<stdio.h>
	int power(int coso, int somu);
	
int main(){
	int coso, somu;
	printf("nhap co so:\n"); scanf("%d", &coso);
	printf("nhap so mu:\n"); scanf("%d", &somu);
	printf("luy thua cua %d ^ %d la: %d\n",coso,somu,power(coso,somu));
	return 0;
}
int power(int coso, int somu){
	int luythua = 1;
	for(int i = 1; i <= somu; i++)  {
        luythua = luythua * coso;
    }
    return luythua;
}

