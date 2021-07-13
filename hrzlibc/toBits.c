#include <stdio.h>
#include <stdlib.h>

void dump(void *p, int length) {
	char *s=p;
	int i;
	for(i=0; i<length; i++,s++) {
		printf("%p: %x\n",s, *s);	
	}
}

void f_itoa() {
	//#include <stdlib.h>
	//char *itoa(int value, char *string, int radix) for windows. 
	int a=10; //scanf("%d",&a);
	char b[100];
//	itoa(a,b,2);
	printf("%s",b);
}

int main(void) {
	//method01
	int a=0x12345678;
	//dump(&a, sizeof(a));	

	//method02
	//f_itoa();
	
	//sprintf()
	char str[255];
	sprintf(str, "%x", 100);
	printf("%s\n", str);
	sprintf(str, "%x", 100);
	printf("%s\n", str);

	return 0;
}
