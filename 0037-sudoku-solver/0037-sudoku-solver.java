class Solution {
    public  boolean isSafe(char[][] board, int row, int col, int number) {
        // check in any of the row & col that num is there or not
        for (int i = 0; i < board.length; i++) {
            if (board[i][col] == (char) (number + '0')) {
                return false;
            }
            if (board[row][i] == (char) (number + '0')) {
                return false;
            }
        }

        // now check in the grid
        // how to get starting cell of the grid is row/3*3 , col/3*3

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) // +3 because each grid is 3*3
        {
            for (int j = startCol; j < startCol+3; j++) {
                if (board[i][j] == (char) (number + '0')) {
                    return false;
                }
            }
        }
        return true;
    }

    public  boolean helper(char[][] board, int row, int col) {
        // base case
        if (row == board.length) {
            return true;
        }

        int nrow = 0; // suppose if we at last col 1st row so we have to start with the next row first
                      // col
        int ncol = 0;

        if (col != board.length - 1) {
            nrow = row;
            ncol = col + 1;
        } else {
            nrow = row + 1;
            ncol = 0;
        }

        // now check if there is already a number or not
        if (board[row][col] != '.') {
            // then call next cell
            if (helper(board, nrow, ncol)) {
                return true;
            }
        } else {
            // if no number then we will check if the number to be placed is safe or not
            for (int i = 1; i <= 9; i++) {
                if (isSafe(board, row, col, i)) {
                    board[row][col] = (char) (i + '0'); // if safe then place the number
                    if (helper(board, nrow, ncol)) {
                        return true; // then again call for next one
                    } else {
                        board[row][col] = '.'; //backtracking
                    }
                }
            }
        }
        return false;

    }

    public void solveSudoku(char[][] board) {
        helper(board,0,0);
    }
}