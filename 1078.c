#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	scanf("%d", &n);
	int i;
	
	for(i = 0; i <= n; i++){
		if(i % 2 == 0){
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
