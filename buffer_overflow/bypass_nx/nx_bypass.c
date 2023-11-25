#include <stdio.h>
#include <string.h>


void overflow(void){

	char c[20];
	
	puts("Can you bypass? ");
	read(0, c, 100);
	printf("writed: %s\n", c);

}

int main(void){

	overflow();
	return 0; 

}
