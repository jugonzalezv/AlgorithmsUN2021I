#include <stdio.h>

long long gcd(long long a,long long b);

int main(){
	long long a,b;

	scanf("%lld",&a);
	scanf("%lld",&b);

	printf("%lld",gcd(a,b));	
}



long long  gcd(long long a,long long b){

	if(b == 0) return a;
	else return gcd(b,a%b);

}
