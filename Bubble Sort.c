#include <stdio.h>

int main(void){
	int i, j, temp;
	int array[10] = {2,3,5,1,4,7,6,8,9,10};
	for(i =0; i < 10; i++){
		for(j = 0; j < 9 - i; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++){
		printf("%d ", array[i] );
	}
	return 0;
}
