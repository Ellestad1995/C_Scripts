#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	
	switch(argc){
	case 1:
	printf("Name of program is: %s", argv[0]);
	break;
	case 2: 
	printf("You entered: %s\n", argv[1]);
	break;
	default:
	break;
	}	
printf("Catch you later");

return 0;
}
