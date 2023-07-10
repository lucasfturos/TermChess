run: build
	@./chess
build:
	@gcc -Wall -Wextra -g -o chess \
		src/main.c \
		src/Board/board.c \
		src/Inputs/inputs.c \
		-lm
clean:
	@rm -rf chess
