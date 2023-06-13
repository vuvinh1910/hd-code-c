#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T); // Nhập số lượng bộ test

    while (T--) {
        int N;
        scanf("%d", &N); // Nhập số lượng phần tử trong dãy số

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); // Nhập phần tử của dãy số
        }

        long long max_sum = INT_MIN; // Khởi tạo tổng lớn nhất ban đầu
        long long current_sum = 0; // Khởi tạo tổng hiện tại ban đầu

        for (int i = 0; i < N; i++) {
            if ( current_sum + A[i] > A[i] ){ current_sum = current_sum + A[i]; } else 
			{
				current_sum = A[i];
			}
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }

        printf("%lld\n", max_sum); // In tổng lớn nhất của dãy con
    }

    return 0;
}
