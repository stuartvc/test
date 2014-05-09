User: main.o user.o save.o
	gcc -o User main.o user.o save.o

main.o: main.c user.h save.h
	gcc -c main.c

user.o: user.c user.h
	gcc -c user.c

save.o: save.c save.h user.h
	gcc -c save.c

clean:
	rm -f *.o
	rm -f User
