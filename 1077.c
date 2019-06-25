#include <stdio.h>

int main(){
	int value;
	int result;
	
	scanf("%d", &value);
	
	for(result = 0; result <= value; result++ ){
		printf("%d\n", result);
	}
	
	
	return 0;
}
