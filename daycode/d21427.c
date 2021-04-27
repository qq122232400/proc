#include  <stdio.h>


int x,y;

int main(void) {
	
	printf("test in AT&T ASM\n");	
	//__asm__("movl $23, %eax");
	//__asm__("movl %eax, $ii");
	//__asm__("movl %eax,%ecx");
	//__asm__("movl %eax, =r(ii));
	//printf("%d",ii);
	


	printf("1:x=%d,y=%d\n",x,y);	
	__asm__("movl $9,%eax"); // __asm__("movl $99,%eax;"); 
	__asm__("movl $13,%ebx");
	__asm__("movl %%ebx,%0"
			: "=m"(x) //:"=b"(x)
	);
	printf("2:x=%d,y=%d\n",x,y);	
	__asm__("movl $99,%eax"); // __asm__("movl $99,%eax;"); 
	__asm__("movl %%eax,%0"
			: "=a"(y) //:"=m"(y)
	);
	printf("3:x=%d,y=%d\n",x,y);	
	
	return 0;
}
