#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int x;
    scanf("%d", &x);
    for (int p = 0; p < x; p++) {
        char a[100];
        scanf(" %[^\n]", a);
        printf("%s\n", a);
    }
    return 0;
}
