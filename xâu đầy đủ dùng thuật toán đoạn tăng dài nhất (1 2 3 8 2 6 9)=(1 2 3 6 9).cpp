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
    printf("%d\n", lis(c)); 
    return 0;
}  // Một xâu được gọi là đầy đủ nếu xóa đi 0 hoặc nhiều hơn các ký tự từ xâu đó ta thu được xâu abcdefghijklmnopqrstuvwxyz
//Cho một xâu ký tự chỉ bao gồm các chữ cái viết thường. Hãy tính số ký tự phải chèn thêm ít nhất (vào bất cứ chỗ nào) để có thể chuyển xâu đó sang dạng đầy đủ.
