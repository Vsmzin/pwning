#include <stdio.h>
#include <string.h>


void overflow(void){

	char c[40];
	
	puts("Can you bypass? ");
	gets(c);
	printf("writed: %s\n", c);
}

int main(void){

	overflow();
	return 0; 
}
