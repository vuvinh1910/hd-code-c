#include<stdio.h>
#include<ctype.h>
#include<string.h>
main(){
    int i=0;
    char a[100];
    char* b[100];
    gets(a);
    char* tach=strtok(a," ");
    while(tach != NULL){
        b[i++]=tach;
        tach=strtok(NULL," ");
    }
    for(int c=0;c<i;c++){
        b[c][0]=toupper(b[c][0]);
        for(int j=1;j<strlen(b[c]);j++){
            if(islower(b[c][j])==0){
                b[c][j]=tolower(b[c][j]);
            }
        }
        printf("%s ",b[c]);
    }
}