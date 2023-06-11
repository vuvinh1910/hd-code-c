#include <stdio.h>
#include <math.h>
#include<string.h>

long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}

long long bcnn(long long a,long long b){
	return a*b/(gcd(a,b));
}

int main(){
	int y;
	scanf("%d",&y);
	while (y--)
	{
	int a;
	scanf("%d",&a);
	long long k=1;
	for(int i=2;i<=a;i++){
		k=bcnn(k,i);
	}
	printf("%llu\n",k);

	}
}
