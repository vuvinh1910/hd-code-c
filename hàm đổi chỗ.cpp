#include <stdio.h>

void doicho(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a[50]={1,2,3,4,5};
	doicho(&a[0],&a[4]);
	// a={5,2,3,4,1};
}
