all: give-me-pass!

give-me-pass!: main.o password_generators.o
	gcc main.o password_generators.o -Wall -Wextra -o give-me-pass!

main.o: ./src/main.c
	gcc -c ./src/main.c -O3 -g -Wall -Wextra -o main.o

password_generators.o: ./src/password_generators.c
	gcc -c ./src/password_generators.c -O3 -g -Wall -Wextra -o password_generators.o

clean:
	rm -rf *.o
