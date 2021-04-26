#include <stdio.h>
typedef unsigned char *byte_pointer;

void to_bites(byte_pointer start, int len) {
	for(int i=0; i<len; i++) {
		for(int j=0; j<8; j++)
			printf("%d", (start[i] >> j) && 0x1);
		printf(" ");
	}
	printf("\n");
}

void main() {
	//double dx=1;
	int dx=1;
	//printf("%lf\n", dx);
	printf("%d\n",dx);

	//to_bites((byte_pointer)&dx, sizeof(double));
	
	to_bites((byte_pointer)&dx, sizeof(int));
}
