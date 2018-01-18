#include <stdlib.h>
#include <stdio.h>
#include <string.h> //memset
/*Include libraries for socket programming*/
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
/*End of socket libraries*/

int main(int argc, char *argv[] ){


//int sockfd; //Result from connect
int s; //holds the socket
int status;
struct addrinfo hints;
struct addrinfo  *servinfo; //Points to the results

memset(&hints, 0, sizeof hints); //making sure the struct is empty

/*Prepare socket address*/
hints.ai_family = AF_INET;
hints.ai_socktype = SOCK_STREAM; //tcp stream socket
hints.ai_flags = AI_PASSIVE; //fill in ip automatically

if((status = getaddrinfo("www.vg.no", "80", &hints, &servinfo)) != 0){
fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
exit(1);
} 

//Building a socket | returns socket descriptor or -1 when error
if ((s = socket(servinfo->ai_family, servinfo->ai_socktype, servinfo->ai_protocol)) == -1){
//there was an error | good thing we catch this
fprintf(stderr, "socket error: %s\n", gai_strerror(s));
exit(1);
}
//Next step we need/can connect it to a local port in order to listen to that port or send through that port. When only sending data the local port doesn't really matter
//bind(s, (struct sockaddr *)&hints, sizeof hints);


//Finally sending of something

s = connect(s, servinfo->ai_addr, servinfo->ai_addrlen);
if (s == -1){
fprintf(stderr, "Connect failed: %s\n", gai_strerror(s));
}






printf("\n\nFinished\n\n");
return 0;
}
