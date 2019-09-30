main: add_node.o delete_node.o get_node.o release_node.o init.o main1.o print_LL.o search_LL.o
	gcc -o main add_node.o delete_node.o get_node.o release_node.o init.o print_LL.o search_LL.o main1.o
main1.o: main1.c struct_node.h
	gcc -c main1.c
add_node.o: add_node.c struct_node.h get_node.c
	gcc -c add_node.c
delete_node.o: delete_node.c struct_node.h release_node.c
	gcc -c delete_node.c
get_node.o: get_node.c struct_node.h
	gcc -c get_node.c
release_node.o: release_node.c struct_node.h
	gcc -c release_node.c
init.o: init.c struct_node.h
	gcc -c init.c
print_LL.o: print_LL.c struct_node.h
	gcc -c print_LL.c
search_LL.o: search_LL.c struct_node.h
	gcc -c search_LL.c
clean:
	rm *.o && rm main
tar:
	tar cvf pa1.tar main1.c add_node.c get_node.c release_node.c delete_node.c init.c print_LL.c search_LL.c struct_node.h makefile main
gzip:
	gzip pa1.tar
tgz:
	mv pa1.tar.gz pa1.tgz
