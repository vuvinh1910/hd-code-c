#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int u;scanf("%d",&u);
    while(u--){
        char a[502],b[502];
        int hieu[502]; int x=0;
        scanf("%s %s",a,b);
        int a2=strlen(a)-1;
        int b2=strlen(b)-1;
        int du=0; int s=0;
        if(a2<b2){
            int temp=a2;
            a2=b2;
            b2=temp;
            s=1;
        } else {
            if(a2==b2){
                for(int i=0;i<a2;i++){
                    if(b[i]==a[i]) continue;
                    if(b[i]>a[i]){
                        int temp=a2;
                        a2=b2;
                        b2=temp;
                        s=1;
                        break;
                    }
                    if(a[i]>b[i]) {s=0;break;}
                }
            }
        }
        while(a2>=0 || b2>=0){
            int hieu2=du;
            if(a2>=0){
                if(s==0){
                    hieu2+=a[a2]-'0';
                } else hieu2+=b[a2]-'0';
                a2--;
            }

            if(b2>=0){
                if(s==0){
                    hieu2-=b[b2]-'0';
                } else hieu2-=a[b2]-'0';
                b2--;
            }
            if ( (hieu2+10) <= 9){ du = -1; } else du = 0;
            hieu[x]=(hieu2+10)%10;
            x++;
        }

        for(int i=x-1;i>=0;i--){
            if(hieu[i]==0){
                hieu[i]='k';
            } else break;
        }

        for(int i=x-1;i>=0;i--){
            if(hieu[i]!='k'){
            printf("%d",hieu[i]);}
        } printf("\n");
    }
}