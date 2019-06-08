#include <stdio.h>

int main(void){
	int i,j,min,index,temp;
	int array[10] = {1,4,3,2,5,7,8,6,9,10};
	for (i = 0; i<10; i++) {
		min = 9999;
		for (j=i; j<10;j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i=0;i<10;i++){
		printf("%d", array[i]);
	
	}
	return 0;
	
}
