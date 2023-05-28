#include<stdio.h>

int add(){
	int a;
	scanf("%d",&a);
	return a;
	}
int main() {
	int n=add();
	int a[1000];
	for(int i=0;i<n;i++){
		a[i]=add();
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
