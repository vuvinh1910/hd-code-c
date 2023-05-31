#include <stdio.h>
void nhap(char a[]){
	gets(a);
}
int main(){
	char a[100];
	nhap(a); int k;
    for(int i=0;i<strlen(a);i++){
		for(int j=i;j<strlen(a);j++){
			int min=a[i];
			if(min>a[j]){
				min=a[j];
				k=j;
			}
		}
		int t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	printf("%s",a);
}