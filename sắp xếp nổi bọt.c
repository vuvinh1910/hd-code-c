#include <stdio.h>
void nhap(char a[]){
	gets(a);
}
int main(){
	char a[100];
	nhap(a);
	int t=1;
	while(t!=0){
		t=0;
		for(int i=0;i<strlen(a)-1;i++){
			if(a[i]>a[i+1]){
				int k=a[i];
				a[i]=a[i+1];
				a[i+1]=k;
				t=1;
			}
		}
	}
	printf ("%s",a);
}