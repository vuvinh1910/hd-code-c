#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0'; // xoa ky tu \n
    printf("Chuoi ban dau: %s\n", str);
    strrev(str);
    printf("Chuoi sau khi dao nguoc: %s", str);
    return 0;
}
