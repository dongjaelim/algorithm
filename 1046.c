#include <stdio.h>

int main(){
	long long int a;
	long long int b;
	long long int c;

	
	scanf("%lld %lld %lld", &a, &b, &c);
	
	printf("%lld\n", a + b + c);
	printf("%.1lf\n", (float)(a + b + c) / 3);
	
	return 0;
	
}
