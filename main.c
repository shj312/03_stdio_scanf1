#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input a numer :");
	scanf("%c", &c);
	
	i = c - '0';
	printf("THe input number is %i\n", i);
	
	return 0;

}
