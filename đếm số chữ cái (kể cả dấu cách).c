#include <stdio.h>
#include <string.h>

int main() {
    char i[1000]; 
    fgets(i, sizeof(i), stdin);
    printf("%d", strlen(i)-1);
    return 0;
}