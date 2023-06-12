#include<stdio.h>

void doicho(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a; scanf("%d",&a);
	int b[50];
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	int t;
	for(int i=0;i<a;i++){
		int k=b[i];
		for(int j=i+1;j<a;j++){
			if(k>b[j]){
				k=b[j];
				t=j;
			}
		}
		doicho(&b[i],&b[t]);
	}
	for(int i=0;i<a;i++){
		printf("%d ",b[i]);
	}
}