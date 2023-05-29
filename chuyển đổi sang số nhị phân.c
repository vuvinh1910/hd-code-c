#include <stdio.h>

void printBinary(int num) {
    int binary[10];
    int i = 0;
  
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
  
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int a;
    scanf("%d", &a);
    if(a>0){
    printBinary(a);} else printf("0\n");
    return 0;
}