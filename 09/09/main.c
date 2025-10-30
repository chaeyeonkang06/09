//
//  main.c
//  09
//
//  Created by 강채연 on 10/30/25.
//

#include <stdio.h>
#define ROWS 3
#define COLS 3

void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
{
    int i, j;
    for(i=0;i<COLS;i++)
        for(j=0;j<COLS;j++)
            C[i][j] = A[i][j] + B[i][j];
}

void printMatrx(int A[][COLS])
{
    int i, j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int A[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}};
    
    int B[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    int C[ROWS][COLS];
    
    addMatrx(A, B, C);
    printMatrx(C);
        
}

