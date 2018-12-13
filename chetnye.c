#include "chetnye.h"
int function(int* array,int length){
	int i,k=0;
	for(i=0;i<length;i++){
		if (array[i]%2==0){
			k++;
			continue;
		}
		array[i-k]=array[i];
	}
	return length-k;	
	
}
