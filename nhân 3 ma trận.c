#include <stdio.h>
#include <stdlib.h>
int main() {
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10];
    scanf("%d %d %d %d",&m,&n,&p,&q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    } //nhap a
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    } //nhap b
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &C[i][j]);
        }
    } //nhap c
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            D[i][j]=0;
            for(int t=0;t<n;t++){
                D[i][j]+=A[i][t]*B[t][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            E[i][j]=0;
            for(int t=0;t<p;t++){
                E[i][j]+=D[i][t]*C[t][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",E[i][j]);
        }
        printf("\n");
    }
    return 0;
}
