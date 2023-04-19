#include <stdio.h>
#include <string.h>

int main() {
    char i[1000]; 
    fgets(i, sizeof(i), stdin);
    strcpy(i, "");
    printf("%s", i);
    return 0;
}
