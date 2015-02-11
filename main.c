#include <server.c>
#include <client.c>

int main(){
server();//parent runs server
if (pid = fork()) == 0){
//run server first
client();//client heralded and server blocked for access by client only
}
exit(0);
printf("fork unsuccessful");
return 0;
}
