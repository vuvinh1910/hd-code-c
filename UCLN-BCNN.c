#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a*b;
    if (a == 0 || b == 0){
        a=a+b;
    } else {
    while(a!=b){
        if (a>b) {a=a-b;}
        else {b=b-a;}
    }
    }
    printf("%d\n",a);
    printf("%d\n",c/a);
    return 0;
}