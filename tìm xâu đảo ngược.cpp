#include <stdio.h>
#include <string.h> 
#include <ctype.h>
int main(){
   char a[100]; char b[100];
   scanf("%s",a);
   scanf("%s",b);
   if(strcmp(a,strrev(b))==0) printf("1\n"); else printf("0\n");
}