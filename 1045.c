#include <stdio.h>

int main(){
	long long int a;
	long long int b;
	
	scanf("%lld %lld", &a, &b);
	
	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2lf\n", (float)a / b);
	
	return 0;
	
}
