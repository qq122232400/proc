#include <stdio.h>

int main(void) {
	int value=39;
	int value1;
	int value2;
	value1=value<<1; //left<<
	value2=value>>1; //right>>
	printf("%d\n",value1);
	printf("%d\n",value2);
	printf("%p\n",&value);
	printf("%p\n",&value1);
	printf("%p\n",&value2);


}
