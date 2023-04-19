#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int b,c;
    b=c=0;
    char i[1000];
    fgets(i, sizeof(i), stdin);
    for(int a=0;a<strlen(i)-1;a++){
        if(isalpha(i[a])!=0){
            b++;
        }
        if(isdigit(i[a])!=0){
            c++;
        }
    }
    printf("chu:%d\n so:%d",b,c);
    return 0;
}