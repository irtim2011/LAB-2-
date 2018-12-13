#include <stdio.h>
#include <stdlib.h>
#include "chetnye.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *f;
	int length,i;
	int *array;
	
    f=fopen("test.txt","r");
	if (f==NULL) {
		printf("file can not be open");
		return 1;
	}
	fscanf(f,"%d",&length);
	array=(int*)malloc(length*sizeof(int));
	for (i=0;i<length;i++)
		fscanf(f,"%d",&array[i]);
	fclose(f);
	length=function(array,length);
	printf("new length of an array is %d\n",length);
	for (i=0;i<length;i++)
		printf("%d ",array[i]);
	printf("\n");
	
	return 0;

}
