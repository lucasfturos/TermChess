run: build
	@./chess
build:
	@gcc -Wall -Wextra -g -o chess main.c -lm
