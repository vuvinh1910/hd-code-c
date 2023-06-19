#include <stdio.h>
#include <string.h>
#include <math.h>

int tamgiac(long long int c[],int b){
    if(b<3){return -1;}
    for(int i=0;i<b;i++){
        for(int j=i+1;j<b;j++){
            long long int temp = c[i] + c[j];
            if((double) sqrt(temp) == (long long int) sqrt(temp)){
                for(int k=0;k<b;k++){
                    if(c[k]==temp){
                        return 1;
                    }
                }
            }
        }
    }
     return -1;
}


int main() {
    int a;scanf("%d",&a);
    while (a--)
    {   
        long long int c[5000];
        int b;scanf("%d",&b);
        for(int i=0;i<b;i++){
            scanf("%lld",&c[i]);
            c[i]=c[i]*c[i];
        }
        if(tamgiac(c,b)==-1) printf("NO\n");
        else printf("YES\n");
    }
}
