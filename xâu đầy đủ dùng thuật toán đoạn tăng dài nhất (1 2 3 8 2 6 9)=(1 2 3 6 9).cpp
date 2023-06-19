#include <stdio.h>
#include <string.h>

int lis(char c[]) {
    int len = strlen(c);
    if (len == 0) {
        return 26; // Xâu rỗng, cần chèn tất cả các ký tự từ a đến z
    }
    int dai[len];

    for (int i = 0; i < len; i++) {
        dai[i] = 1;
        for (int j = 0; j < i; j++) {
            if (c[i] > c[j] && dai[j]+1 > dai[i]) { // dài c[i] mới > dài c[i] cũ
                dai[i] = dai[j] + 1;
            }
        }
    }

    int res = dai[0];
    for (int i = 0; i < len; i++) {
        if (dai[i] > res) {
            res = dai[i];
        }
    }

    return 26 - res;
}

int main() {
    char c[1000];
    scanf("%s", c);
    printf("%d\n", lis(c)); // aiemckgobjfndlhp
    return 0;
}
