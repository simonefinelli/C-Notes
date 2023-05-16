/*
 * Name: main.c
 * Title: Tic Tac Toe.
 * Purpose: Implements the famous game.
 * Date: 2023/05/09
 * Author: Simox
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LEN 3

// prototypes
void draw_title();
void draw_board(int n, char board[n][LEN]);
struct player_choice get_usr_choice(unsigned short curr_p);
void insert_choice(int n, char board[n][LEN], unsigned short curr_p,
                   struct player_choice curr_p_choice);
int check_status(int n, char board[n][LEN]);

// global
struct player_choice {
    int row;
    char column;
};

int main()
{
    // initialization
    char board[LEN][LEN] =
            {{'-', '-', '-'},
             {'-', '-', '-'},
             {'-', '-', '-'}};

    struct player_choice usr_choice;
    int result;
    unsigned short current_player = 1;  // Player 1 (1) - Player 2 (2)
    int move_lefts = 9;

    // draw board
    while (true) {
        draw_board(LEN, board);
        usr_choice =  get_usr_choice(current_player);
        insert_choice(LEN, board, current_player, usr_choice);
        result = check_status(LEN, board);

        if (result == 0) {
            // no winner yet
            current_player = current_player == 1 ? 2 : 1;  // change turn
            continue;
        } else {
            // victory or drawn
            break;
        }
    }

    draw_board(LEN, board);  // update board last time
    if (result == 1) {
        printf("Player %d is the Winner!", current_player);
    } else {
        printf("The match is a drawn!");
    }

}

void draw_title()
{
    system("clear");
    printf("\n  * * * TIC TAC TOE * * *\n\n");
}

void draw_board(int n, char board[][LEN])
{
    system("clear");  // clear the terminal

    draw_title();

    for (int r = 0; r < n; r++) {
        printf(" %d  ", r + 1);
        for (int c = 0; c < n; c++) {
            printf("   ");
            printf(" %c ", board[r][c]);
            printf("  ");
        }
        printf("\n\n");
    }
    printf("\tA\tB\tC\n\n");
}

struct player_choice get_usr_choice(unsigned short curr_p)
{
    int r;
    char c;

    printf("Player %d enter your choice: ", curr_p);
    scanf("%c%d", &c, &r);
    while((getchar()) != '\n');  // flush scanf buffer

    struct player_choice choice = {r-1, c};
    return choice;
}

void insert_choice(int n, char board[n][LEN], unsigned short curr_p,
                   struct player_choice curr_p_choice)
{
    char letter = curr_p == 1 ? 'X' : 'O';

    int row = curr_p_choice.row;
    int column;
    switch (curr_p_choice.column) {
        case 'A':
            column = 0;
            break;
        case 'B':
            column = 1;
            break;
        case 'C':
            column = 2;
            break;
        default:
            exit(-1);
    }

    // set choice
    board[row][column] = letter;
    printf("here\n");
}

int check_status(int n, char board[n][LEN])
{
    /*
     * return 1, there is a winner
     * return 0, no winner yer
     * return -1, drawn
     */

    // check for winner on rows and columns
    for (int i = 0; i < n; i++) {
        for (char c = 'X'; c >= 79; c -= 9) {  // X = 88, O = 79 in ASCII
            if ((board[i][0] == c && board[i][1] == c && board[i][2] == c) ||  // rows
                (board[0][i] == c && board[1][i] == c && board[2][i] == c))  // cols
                return 1;
        }
    }
    // check winner on diagonals
    for (char c = 'X'; c >= 79; c -= 9) {
        if ((board[0][0] == c && board[1][1] == c && board[2][2] == c) ||  // rows
            (board[2][0] == c && board[1][1] == c && board[0][2] == c))  // cols
            return 1;
    }

    // check if the game has to continue
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (board[r][c] == '-')
                return 0;
        }
    }

    return -1;
}
