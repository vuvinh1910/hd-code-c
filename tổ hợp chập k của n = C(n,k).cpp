#include "stdio.h"

int C(int n, int k){
   if(n == k || k == 0){
      return 1;
   }
   else{
      return C(n - 1, k - 1) + C(n - 1, k);
   }
}

int main(){
   printf("%d", C(12, 2));
   return 0;
}