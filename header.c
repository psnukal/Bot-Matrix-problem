#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_MATRIX 512

struct matrix {
    int val;
    struct matrix *right;
    struct matrix *left;
    struct matrix *down;
};
typedef struct matrix matrix_t;

struct userInput {
    int starti;
    int startj;
    int endi;
    int endj;
    matrix_t *zrzc;
};
typedef struct userInput userInput_t;

void read_file(const char *filepath, userInput_t *user_input);
void display_matrix_list(matrix_t *head);
void construct_matrix_list(int in_matrix[MAX_MATRIX][MAX_MATRIX], userInput_t *ui);
matrix_t *createNode(int val);
void path_find(userInput_t *ui);