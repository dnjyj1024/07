#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i = 10;
	printf("함수 호출전 i=%d\n", i);
	inc(i);
	printf("함수 호출 i=%d\n", i);
	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}
