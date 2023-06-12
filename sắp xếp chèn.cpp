#include<stdio.h>

void chenmang(int c[],int b,int vitri,int dodai){
	for(int i=dodai+1;i>vitri;i--){
		c[i]=c[i-1];
	}
	c[vitri]=b;
}

int main(){
	int a,b[50],c[50];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	int d=0;
	for(int i=0;i<a;i++){
		if(d==0){
			c[0]=b[0];
			printf("Buoc %d: ",d);
			for(int u=0;u<=d;u++){
					printf("%d ",c[u]);
				}
			printf("\n");
			d=1;
			} else {
			for(int j=d-1;j>=0;j--){
				if(b[i]>=c[j]){
					chenmang(c,b[i],j+1,d-1);break;
				}
				if(b[i]<=c[j] && j==0){
					chenmang(c,b[i],0,d-1);break;
				}
			}
			printf("Buoc %d: ",d);
			for(int u=0;u<=d;u++){
				printf("%d ",c[u]);
			}
			printf("\n");
			d++;
		}
	}
}