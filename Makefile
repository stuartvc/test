User: main.o user.o
	gcc -o User main.o user.o

main.o: main.c user.h
	gcc -c main.c

user.o: user.c user.h
	gcc -c user.c


clean:
	rm -f *.o
	rm -f User
