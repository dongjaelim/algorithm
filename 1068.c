#include <stdio.h>

int main(){
	int a;
	
	scanf("%d", &a);
	
	if ( a >= 90 && a <= 100){
		printf("%c\n", 'A');
	} 
	else if ( a >= 70 && a <= 89){
		printf("%c\n", 'B');
	} 
	else if ( a >= 40 && a <= 69){
		printf("%c\n", 'C');
	} 
	else {
		printf("%c\n", 'D');
	} 
	
	return 0;
}
