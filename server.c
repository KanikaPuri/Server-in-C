#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <ldap.h>

int server()
{//Copied from last assignment*/
     int newsock, acceptnewsock; //initialize 
     socklen_t opensocket;//open socket
     struct hostent *server;
struct sockaddr_in serveraddr;     
	struct sockaddr_in serveraddr, clientaddr;//socket addresses in structs
     
    /* if (argc < 2) {
         fprintf(stderr,"error\n");
         exit(1);
     }*/
    /* newsock = socket(AF_INET, SOCK_STREAM, 0);//AF_INET: SOCKSTREAM:
     if (newsock < 0) 
        error("Can;t open socket");
     bzero((char *) &serveraddr, sizeof(serveraddr));
     int portnum1 = 9080;
     serveraddr.sin_family = AF_INET;
     serveraddr.sin_addr.s_addr = INADDR_ANY;
     serveraddr.sin_port = htons(portnum1);
     if (bind(newsock, (struct sockaddr *) &serveraddr,
              sizeof(serveraddr)) < 0) 
              error("Can't bind");
     listen(newsock,5);
     opensocket = sizeof(clientaddr);
     acceptnewsock = accept(newsock, 
                 (struct sockaddr *) &clientaddr, 
                 &opensocket);
     if (acceptnewsock < 0) 
          error("Can't accept");
	char buffer[256];//open buffer     
	bzero(buffer,256);
     int n = read(acceptnewsock,buffer,255);
     if (n < 0) error("Cant read from socket\n");
     printf("Message:");//change?
     n = write(acceptnewsock,"I got your message",18);
	if (n < 0) error("ERROR writing to socket");	
 	*/



//Part 1.*/
//connection to machine with active directory running
server = "http://www.apollo.cselabs.umn.edu"
int portnum2 = 9080;//different port number to connect to apollo directory server. Server turns into client.
int writesock;
socklen_t writesocket; 
struct sockaddr_in buf, serveradd;
char buffer="Register purix021 192.168.2.9\r\n";
writesock=socket(AF_INET, SOCK_STREAM, 0);
 if (writesock < 0) {
        error("Can;t open socket for apollo");
			}
     buf.sin_family = AF_INET;
     buf.sin_addr.s_addr = htonl(INADDR_ANY);
     buf.sin_port = htons(portnum2);
if (bind(writesock, (struct buf *) &serveradd,
              sizeof(serveradd)) < 0) {
              error("Can't bind to apollo");
listen(writesock, 5);
int readfd;
int fd=accept(writesock,0,0);
while (fd>0){
write(fd,buffer, strlen(buffer));
}
if (write(fd,buffer, strlen(buffer)) > 0){
read(readfd, void *buf, strlen(buf));
}
close(writesock);
/*end of part 1*/





/*Ignore this section
LDAP *ld= ldap_init("apollo.cselabs.umn.edu", 9080);


ldap_simple_bind_s(ld,x500);
//Detect default of LDAP server
InetAddress address = InetAddress.getLocalHost();
 String domain = address.getCanonicalHostName();
Attributes attrs = dns.getAttributes( "_ldap._tcp." + domain, new String[] { "SRV" } );//should add to AD with DNS record (SRV record) created.*/



/*Ignore this section
ADsGetObject(path





struct sockaddr_in myip = getifaddrs();
if (getifaddrs < 0) error("incorrect ip\n");

  //replicate python library
	// Get a reference to the main module.
	PyObject* main_module =PyImport_AddModule("__main__");
// Get the main module's dictionary
// and make a copy of it.
PyObject* main_dict =PyModule_GetDict(main_module);
PyObject* main_dict_copy =PyDict_Copy(main_dict);

// Execute two different files of
// Python code in separate environments
FILE* file_1 = fopen("file1.py", "r");
PyRun_File(file_1, "file1.py",
           Py_file_input,
           main_dict, main_dict);
	DB.GETRECORD(purix021);//x.500
	DB.GETRECORD(myip);
	DB.GET

End of ignore section*/

     close(acceptnewsock);
     close(newsock);
     return 0; 
}
