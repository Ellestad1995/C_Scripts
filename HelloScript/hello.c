#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG

int main(void){
	char buffer[5];
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
	printf("You wrote: %s \n", b);

	//buffer has memory reallocated
	int bSize = (int) sizeof(b);
	int arrSize = (int) sizeof(buffer);
	printf("Array length is: %zu \n", strlen(buffer));
	printf("The size of a char is: %zu \n", sizeof(char));
	printf("The buffer was reallocated to: %d \n", bSize);
	printf("The array size is: %d \n", arrSize);
	//puts(buffer);
	
return 0;
}
