//nhap vao mot mang n chuoi, sap xep lai thu tu alphabe
#include<stdio.h>
#include<string.h>

int main(){
	char s[10][20], t[20];
	int j,i;
	int n;
	
	printf("nhap n=\n");
	scanf("%d",&n);
	
	printf("nhap chuoi\n",i);
	for(int i=0; i<n;i++){
		scanf("%s",&s[i]);
	}
	  for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }	
		printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < n; i++)
      printf("\n%s", s[i]);
	
	
	return 0;
}
