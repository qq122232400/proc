#include <stdio.h>
#include <time.h>

int main() {
	time_t now=0;
	now = time(NULL);
	printf("time is :%ld",now);

}
