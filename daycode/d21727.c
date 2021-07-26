#include <stdio.h>

unsigned long input=0x12345678;
unsigned long output,zero;

int main() {

	__asm__ __volatile__( "mov %1,%0\n\t"
			: "=r"(output)
			: "r"(input)	);
	printf("output:0x%lx\t zero:0x%lx\t\n",output,zero);
	
	return 0;

}
