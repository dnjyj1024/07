#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sub(void);

int main(void) 
{
	int i;
	for(i=0;i<3;i++)
	sub();
	return 0;
}

void sub(void)
{
	int auto_count = 0;
	static int static_count = 0;
	auto_count++; // 자동 할당 
	static_count++; //정적할당  
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);  
}
