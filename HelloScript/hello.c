#include <stdio.h>
#include <stdlib.h>

#define DEBUG

int main(void){
char *buffer;
size_t bufsize = 32;
size_t characters;

buffer = (char *)malloc(bufsize * sizeof(char));
//malloc is memory allocation
	//int letter;

	#ifdef DEBUG
	printf("Debug mode is on, bitches!");
	#endif

	printf("Tell me your name please: ");

	characters = getline(&buffer, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("You wrote: ");
	puts(buffer);
	
return 0;
}
