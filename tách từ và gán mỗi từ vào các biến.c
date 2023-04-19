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
        printf("%s ",gan[b]);
    }
    return 0;
}