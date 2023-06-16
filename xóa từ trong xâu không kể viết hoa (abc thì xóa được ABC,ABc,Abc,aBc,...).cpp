#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ktra(char *tu[],char b[],int n){
    int h=0;
    for(int i=0;i<strlen(b);i++){
        if(tu[n][i]==toupper(b[i]) || tu[n][i]==tolower(b[i])){
            h++;
        } else break;
    }
    int k=strlen(b);
    if (h==k) {return 1;} else return 0;
}

int main(){
    int y;scanf("%d",&y);
    for(int r=1;r<=y;r++){
    char a[201];
    scanf(" %[^\n]", a);

    char b[201];
    char *tu[201];int x=0;
    scanf("%s", b);

    char *tachtu=strtok(a," ");
    while (tachtu!=NULL)
    {
        tu[x++]=tachtu;
        tachtu=strtok(NULL," \n");
    }

    for(int i=0;i<x;i++){
        if(strlen(tu[i])==strlen(b)){
            int s=ktra(tu,b,i);
            if(s==1){strcpy(tu[i],"");}
        }
    }
    
    printf("Test %d: ",r);
    for(int i=0;i<x;i++){
        if(strcmp(tu[i],"")!=0){
            printf("%s ",tu[i]);
        }
    }
    printf("\n");
    }
}