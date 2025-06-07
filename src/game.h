#ifndef GAME_H
#define GAME_H

#define SIZE 3

void initBoard(char board[SIZE][SIZE]);
void printBoard(char board[SIZE][SIZE]);
int makeMove(char board[SIZE][SIZE], int row, int col, char player);
char checkWinner(char board[SIZE][SIZE]);
int boardFull(char board[SIZE][SIZE]);

#endif
