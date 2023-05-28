#include <stdio.h>
int sochuso(int a)
{
    int b=0;
    while(a>0){
        a=a/10;
        b++;
    }
    return b;
}
int ktra(int a)
{
    int c=0;int b;int e=a;
    while(a>0){
        b=a%10;
        c=c+pow(b,sochuso(e));
        a=a/10;
    }
    return c;
}
int main (){
    int a;
    scanf("%d",&a);
    if(ktra(a)==a){printf("YES");}
    else printf("NO");
}