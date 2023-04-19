#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    char *tachtu=strtok(a," ");
    char *gan[100];
    int i=0;
    while(tachtu != NULL){
        gan[i++]=tachtu;
        tachtu=strtok(NULL, " \n"); // (\n) bỏ dấu xuống dòng khi nhập từ hàm fgets
    }
    for (int b=0;b<i;b++){
        for (int c=b+1;c<i;c++){
            if(strcmp(gan[b],gan[c])==0){
                strcpy(gan[c],"");
            }
        }
    }
    for (int b=0;b<i;b++){
        if (strcmp(gan[b], "")!=0){
            printf("%s ",gan[b]);
        }
    }
    return 0;
}