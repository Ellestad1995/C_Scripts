#include <stdio.h>
#include <stdlib.h>
#include <string.h>//strcpy

/**

An example for allocating memory dynamically

**/


int main(){

char name[100];//Compiler automatically allocates 100 bytes of memory location. This is not very good use of memory.
char *about; //A pointer for allocating memory

strcpy(name, "Star-Lord");

/*Allocating memory dynamically*/
size_t bufferSize = 200 * sizeof(char);
about =  malloc(bufferSize); //Allocating 200 bytes of space. Casting to char pointer

/*Best practice to check if memory could be allocated*/
if(about == NULL){
	fprintf(stderr, "Error - unable to allocate required memory\n");
}else{
	printf("So..Who are you?\n");
	getline(&about,&bufferSize,stdin);
}

printf("name = %s\n", name);
printf("About: %s\n", about);

printf("Catch you later");
return 0;
}
