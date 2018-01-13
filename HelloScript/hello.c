#include <stdio.h>
#include <stdlib.h>

#define DEBUG

int main(void){
	char buffer[10];
	char *b = buffer;
	size_t bufsize = 0;
	size_t characters;

	//buffer = (char *)malloc(bufsize * sizeof(char));
	//malloc is memory allocation
	//Must check if malloc can provide us with memory
	
	/*if(buffer == NULL){
		perror("Unable to allocate buffer!");
		exit(1);
	}*/

	#ifdef DEBUG
	printf("***\nDebug mode is on!\n***\n\n");
	#endif
	
	printf("Tell me your best joke: ");
	
	characters = getline(&b, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("You wrote: %s ", b);
	//puts(buffer);
	
return 0;
}
