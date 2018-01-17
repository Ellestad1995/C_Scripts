#include <stdlib.h>
#include <stdio.h>

/*Include libraries for socket programming*/
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
/*End of socket libraries*/

int status;
struct addrinfo hints
struct addrinfo  *servinfo; //Points to the results


int main(int argc, char *argv[] ){
memset(&hints, 0, sizeof hints); //making sure the struct is empty

/*Prepare socket address*/
hints.ai_family = AF_INET;
hints.ai_socktype = SOCK_STREAM; //tcp stream socket
hints.ai_flags = AI_PASSIVE; //fill in ip automatically

if((status = getaddrinfo("www.vg.no", 80, &hints, &servinfo)) != 0){
fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
exit(1);
} 




return 0;
}
