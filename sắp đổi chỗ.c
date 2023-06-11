#include <stdio.h>
#include <string.h>
void nhap(char a[]){
	gets(a);
}
int main(){
	char a[100]; int k,t;
	nhap(a);
    for(int i=0;i<strlen(a);i++){
        k=a[i];t=i;
		for(int j=i;j<strlen(a);j++){
			if(k>a[j]){
			    t=j;
			}
	    }
	    char b=a[t];
	    a[t]=a[i];
	    a[i]=b;
    }
    printf("%s",a);
}
