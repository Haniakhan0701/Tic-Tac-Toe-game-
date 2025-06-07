#include <stdio.h>
#include "game.h"

int main() {
    char board[SIZE][SIZE];
    int row, col;
    char player = 'X';
    char winner = ' ';

    initBoard(board);

    printf("Welcome to Tic-Tac-Toe!\n");
    printBoard(board);

    while (1) {
        printf("Player %c, enter your move (row and column: 1-3 1-3): ", player);
        if (scanf("%d %d", &row, &col) != 2) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        row--; col--;  // adjust for 0-based index

        if (!makeMove(board, row, col, player)) {
            printf("Invalid move, try again.\n");
            continue;
        }

        printBoard(board);

        winner = checkWinner(board);
        if (winner != ' ') {
            printf("Player %c wins! Congratulations!\n", winner);
            break;
        }

        if (boardFull(board)) {
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
