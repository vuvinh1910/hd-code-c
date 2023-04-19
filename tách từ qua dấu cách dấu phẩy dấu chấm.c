#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    char *tachtu=strtok(a," ");
    while(tachtu != NULL){
        printf("%s ",tachtu);
        tachtu=strtok(NULL, " \n,.");
    }
    return 0;
}