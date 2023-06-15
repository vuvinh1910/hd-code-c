#include<stdio.h>
#include<math.h>

int main(){
    int a,b;scanf("%d %d",&a,&b);
    int c[100][100];
    int trai=0,phai=b-1,tren=0,duoi=a-1,dem=1;
    while(trai<=phai && tren<=duoi){
        
        for(int i=trai;i<=phai;i++){
            c[tren][i]=dem++;
        }
        tren++;

        for(int i=tren;i<=duoi;i++){
            c[i][phai]=dem++;
        }
        phai--;

        if(tren<=duoi){
        for(int i=phai;i>=trai;i--){
            c[duoi][i]=dem++;
        }
        duoi--;
        }

        if(trai<=phai){
        for(int i=duoi;i>=tren;i--){
            c[i][trai]=dem++;
        }
        trai++;
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
