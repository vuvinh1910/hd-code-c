#include <stdio.h>
#include <math.h>
int main(){
	int a[100],b,c,d,e,f,g,h,i,k[100],l,m[100],n;
    for(f=1;f<=6;f++)
    {
    scanf("%d",&a[f]);
    } // nhập rộng cao của 3 HCN
    b=a[1]*a[2]+a[3]*a[4]+a[5]*a[6];
    if(a[1]>a[2]){m[1]=a[1];k[1]=a[2];} else {m[1]=a[2];k[1]=a[1];}
    if(a[3]>a[4]){m[2]=a[3];k[2]=a[4];} else {m[2]=a[4];k[2]=a[3];}
    if(a[5]>a[6]){m[3]=a[5];k[3]=a[6];} else {m[3]=a[6];k[3]=a[5];}
    if(m[1]==m[2]==m[3] && a[1]+a[2]+a[3]+a[4]+a[5]+a[6]-m[1]*3==m[1]){
        printf("YES");
    } else {
        n=m[1];i=k[1];
        if(m[2]>n){n=m[2];i=k[2];}
        if(m[3]>n){n=m[3];i=k[3];}
        
        if(n*n==b && 4*n-(a[1]+a[2]+a[3]+a[4]+a[5]+a[6])==i){
            printf("YES");
        } else {
            printf("NO");
        }
    }
    return 0;
}
