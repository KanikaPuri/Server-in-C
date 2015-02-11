#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <lber.h>


int client()
{
    int newsock;
    struct sockaddr_in serveraddr;
    struct hostent *server;

    char buffer[256];
   /* if (argc < 3) {
       fprintf(stderr,"usage %s hostname port\n", argv[0]);
       exit(0);
    }
    int portnum = atoi(argv[2]);
    newsock = socket(AF_INET, SOCK_STREAM, 0);
    if (newsock < 0) 
        fprintf(stderr,"fprintf opening socket");
    server = gethostbyname(argv[1]);
    if (server == NULL) {
        fprintf(stderr,"No server hostname\n");
        exit(0);
    }*/


//Part 2*/
server == "http://www.apollo.cselabs.umn.edu"//connection to machine with active directory running.*/
int portnum2 = 9080;//different port number to connect to apollo directory server. Server turns into client. */
int serversock;
struct sockaddr_in serveraddr;
serversock=socket(AF_INET, SOCK_STREAM, 0);
if (serversock < 0) 
        fprintf(stderr,"fprintf opening apollo");
 bzero((char *) &serveraddr, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&serveraddr.sin_addr.s_addr,
         server->h_length);
    serveraddr.sin_port = htons(portnum);
    if (connect(newsock,(struct sockaddr *) &serveraddr,sizeof(serveraddr)) < 0) 
        fprintf(stderr,"No connection");
    buffer= "serverlist\r\n";
    int n = write(newsock,buffer,strlen(buffer));
    if (n < 0) 
         fprintf(stderr,"No write");
    bzero(buffer,256);
	 n = read(newsock,buffer,255);
    if (n < 0) 
         fprintf(stderr,"No read");
    printf("%s\n",buffer);//buffer now contains response from server

/*Ignore this section
int auth_method = LDAP_AUTH_SIMPLE;
int desired_version = LDAP_VERSION3;
char *ldap_host = "localhost";
char *root_dn = "cn=server";
char* filter="(objectClass=*)";
char* errstring;
char* dn = NULL;
char* attr;
char** vals;
int i;
int result;
BerElement* ber;
LDAPMessage* msg;
LDAPMessage* entry;
//initialize LDAP library and open connection
if (LDAP *ld= ldap_init("apollo.cselabs.umn.edu", 9080)) == NULL )
{
perror( "ldap_init failed" );
exit( EXIT_FAILURE );
}
//create LDAP bind
if (ldap_bind_s(ld, root_dn, root_pw, auth_method) != LDAP_SUCCESS )
{
ldap_perror( ld, "ldap_bind" );
exit( EXIT_FAILURE );
}
//perform directory search
if (ldap_search_s(ld, base, LDAP_SCOPE_SUBTREE, filter, NULL, 0, &msg) != LDAP_SUCCESS)
{
ldap_perror( ld, "ldap_search_s" );
exit(EXIT_FAILURE);
}
}
End of ignore section*/
//Part 3*/
File *file;
int 3sock;
char space=NULL; int i = 0;
char[] c;char temp;char port;int count = 1;
while (count < 6){
while(space != ' ' && i<strlen(buffer)){
if (c[i] == space){
	temp.copy(c,13,i);
	port.copy(c, 15,i);
	exit(0);
		}
  	i++;
}//temp now contains server ip, port contains char of port
port1 = atoi(port);
3sock=socket(AF_INET, SOCK_STREAM, 0);
if (serversock < 0) 
        fprintf(stderr,"fprintf opening my server");
 bzero((char *) &temp, sizeof(temp));
    temp.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&temp.sin_addr.s_addr,
         server->h_length);
    temp.sin_port = htons(port1);
    if (connect(3sock,(struct sockaddr *) &temp,sizeof(temp)) < 0) 
        fprintf(stderr,"No connection");
    ack = 0; 
clock_t t = clock();
ack=send(3sock, file, 10000000, 0);
if (ntohs(ack) != 2) {
          printf("ack failed");
          exit(0);
}
t = clock() - t;
int sock4;
if (server == "http://www.apollo.cselabs.umn.edu"){//connection to machine with active directory running.*/
int portnum2 = 9090;
temp1 = ntohs(temp);
sock4 = socket(AF_INET, SOCK_STREAM, 0);//connect to socket for part 4
send(sock4, "setrecord purix021 temp1%d port1%d t%d\r\n", 256, 0); 
send(sock4, "getrecord\r\n", 256, 0);
close(3sock);
}
}
//End of part 3

/*Ignore this section
char *root_dn2 = "cn=purix021";

//iterate through returned entries
for(entry = ldap_first_entry(ld, msg); entry != NULL; entry = ldap_next_entry(ld, entry))
{if((dn2 = ldap_get_dn(ld, entry)) != NULL)
	{printf("<BR>");
	printf("Returned dn: %s\n", dn2);
	printf("<BR>");
	ldap_memfree(dn2);
	}
	for( attr = ldap_first_attribute(ld, entry, &ber);attr != NULL;attr = ldap_next_attribute(ld,entry, ber))
	if ((vals = ldap_get_values(ld, entry, attr)) != NULL)
	{
		for(i = 0; vals[i] != NULL; i++)
	{
printf("%s: %s\n", attr, vals[i]);
printf("<BR>");
	}
	ldap_value_free(vals);
	}
ldap_memfree(attr);

if (ber != NULL)
{ber_free(ber,0);
}

printf("\n");
}
Response.end();


ldap_msgfree(msg);
result = ldap_unbind_s(ld);
}
if (result != 0)
{fprintf(stderr, "ldap_unbind_s: %s\n", ldap_err2string(result));
exit( EXIT_FAILURE );
}
return EXIT_SUCCESS;
End of ignore section*/







    close(newsock);
    return 0;
}
