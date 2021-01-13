all: MINILIBMX

MINILIBMX:
	clang -lncurses -std=c11 -Wall -Wextra -Werror -Wpedantic src/*.c -o matrix_rain

clean:
	rm -f matrix_rain

uninstall: clean 

reinstall:
	make uninstall
	make
