all:main.o client.o server.o
	gcc -g -Wall main.o client.o server.o -o main

main.o:main.c server.c client.c
	gcc -g -Wall main.c

client.o:client.c
	gcc -g -Wall client.c

server.o:server.c
	gcc -g -Wall server.c

clean:
	rm -rf *o 


