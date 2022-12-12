all:	func
teste:	func.o	main.o
	gcc	-o	func	func.o	main.o
func.o:	func.c
	gcc	-o	func.o	func.c	-W	-Wall	-ansi	-pedantic
main.o:	main.c	func.h
	gcc -o main.o	main.c	-W	-Wall	-ansi	-pedantic
clean:
	rm -rf *.o
mrproper:	clean
	rm	-rf	func
