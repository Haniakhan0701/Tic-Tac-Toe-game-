CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/main.c src/game.c
OBJ = $(SRC:.c=.o)
EXEC = build/tictactoe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(EXEC)
