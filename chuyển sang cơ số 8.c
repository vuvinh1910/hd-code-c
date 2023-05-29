
#include <stdio.h>

void tam(int a){
    int b;
    b=a%8;
    while(a>0){
    a=a/8;
    tam(a);
    printf("%d",b);
    break;
    }
}

int main() {
    int a;
    scanf ("%d",&a);
    tam(a);
    return 0;
}