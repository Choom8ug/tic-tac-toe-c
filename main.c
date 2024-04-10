#include <stdio.h>

const char BOARD_EMPTY_TILE_PLACEHOLDER = 176;

const char BOARD_HORIZONTAL_TILE_DELIMITER = 205;
const char BOARD_VERTICAL_TILE_DELIMITER = 186;

const char BOARD_INTERSECTION_TILE_DELIMITER = 206;
const char BOARD_T_UP_INTERSECTION_TILE_DELIMITER = 202;
const char BOARD_T_DOWN_INTERSECTION_TILE_DELIMITER = 203;

const char BOARD_TOP_LEFT_CORNER = 201;
const char BOARD_TOP_RIGTH_CORNER = 187;
const char BOARD_BOTTOM_LEFT_CORNER = 200;
const char BOARD_BOTTOM_RIGHT_CORNER = 188;

// char **fill_board(int board_size) {
//     char test[board_size][board_size] = {};
//     for (int i = 0; i < board_size; i++) {
//         for (int j = 0; j < board_size; j++) {
//             test[i][j] = 'o';
//         }
//     }
//     return test;
// }

void print_board_top(int row_chars_count) {
    for (int i = 0; i < row_chars_count; i++) {
        if (i == 0) {
            printf("%c", BOARD_TOP_LEFT_CORNER);
        } else if (i == row_chars_count - 1) {
            printf("%c\n", BOARD_TOP_RIGTH_CORNER);
        } else if (i % 2 == 0) {
            printf("%c", BOARD_T_DOWN_INTERSECTION_TILE_DELIMITER);
        } else {
            printf("%c", BOARD_HORIZONTAL_TILE_DELIMITER);
        }
    }
}

void print_board_bottom(int row_chars_count) {
    for (int i = 0; i < row_chars_count; i++) {
        if (i == 0) {
            printf("%c", BOARD_BOTTOM_LEFT_CORNER);
        } else if (i == row_chars_count - 1) {
            printf("%c\n", BOARD_BOTTOM_RIGHT_CORNER);
        } else if (i % 2 == 0) {
            printf("%c", BOARD_T_UP_INTERSECTION_TILE_DELIMITER);
        } else {
            printf("%c", BOARD_HORIZONTAL_TILE_DELIMITER);
        }
    }
}

int main(void) {
    int board_size = 3;
    int row_chars_count = board_size * 2 + 1; // per board tile 2 delimiters and tile itself are drawn
    // char board** = fill_board(board_size);

    print_board_top(row_chars_count);
    // printf(board);
    // printf("%c%c%c\n", BOARD_VERTICAL_TILE_DELIMITER, BOARD_EMPTY_TILE_PLACEHOLDER, BOARD_VERTICAL_TILE_DELIMITER);
    print_board_bottom(row_chars_count);
    return 0;
}
