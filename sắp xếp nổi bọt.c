#include <stdio.h>

void xuat(int b[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}

int main(){
	int a;scanf("%d",&a);
    int b[100];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
	int t=1;int y=0;
	while(t!=0){
		t=0;
		for(int i=0;i<a-1;i++){
			if(b[i]>b[i+1]){
				int k=b[i];
				b[i]=b[i+1];
				b[i+1]=k;
				t=1;
			}
		}
        	if(t==1){
            		y++;
        		printf("Buoc %d: ",y);
        		xuat(b,a);
        	}
	}
}
