all: give-me-pass!

give-me-pass!: main.o password_generators.o
	gcc main.o password_generators.o -Wall -Wextra -o give-me-pass!

main.o: ./src/main.c
<<<<<<< HEAD
	gcc -c ./src/main.c -O3 -g -Wall -Wextra -o main.o

password_generators.o: ./src/password_generators.c
	gcc -c ./src/password_generators.c -O3 -g -Wall -Wextra -o password_generators.o
=======
	gcc -c ./src/main.c -g -O3 -Wall -Wextra -o main.o

password_generators.o: ./src/password_generators.c
	gcc -c ./src/password_generators.c -g -O3 -Wall -Wextra -o password_generators.o
>>>>>>> f877773ab0d85a41eb34b6b4ef37cd63af95cff4

clean:
	rm -rf *.o
