#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int u;scanf("%d",&u);
    while(u--){
    char a[502],b[502];
    int tong[502];
    scanf("%s %s",a,b);
    int x=0;int du=0; int b2=strlen(b)-1; int a2=strlen(a)-1;
    if(a2>=b2){
    for(int i=strlen(a)-1;i>=0;i--){
        tong[x]=a[i]+du-48;
        x++;
        for(int j=b2;j>=0;j--){
            tong[x-1]+=b[j]-48;
            b2--;break;
        }
        if(i==0){break;}
        du=tong[x-1]/10;
        tong[x-1]=tong[x-1]%10;
    }
    } else {
        for(int i=strlen(b)-1;i>=0;i--){
        tong[x]=b[i]+du-48;
        x++;
        for(int j=a2;j>=0;j--){
            tong[x-1]+=a[j]-48;
            a2--;break;
        }
        if(i==0){break;}
        du=tong[x-1]/10;
        tong[x-1]=tong[x-1]%10;
        }
    }
    for(int i=x-1;i>=0;i--){
        printf("%d",tong[i]);
    } printf("\n");
    }
}