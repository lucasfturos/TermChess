run: build
	@./chess
build:
	@gcc -Wall -Wextra -g -o chess main.c board.c -lm
clean:
	@rm -rf chess
