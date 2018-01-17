#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	printf("\n\n");
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
printf("\n\nCatch you later\n\n");

return 0;
}
