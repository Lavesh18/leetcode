class Solution {
    public void saveBoard(char[][]board,List<List<String>> allBoards)
    {
        String row = "";//represent the row string
        List<String> newBoard = new ArrayList<>();

        for(int i=0;i<board.length;i++)
        {
            row="";
            for(int j=0;j<board[0].length;j++)
            {
                if(board[i][j] == 'Q')
                {
                    row+='Q';
                }
                else
                {
                    row+='.';
                }
            }
            newBoard.add(row); //pick all rows and add to newBoard

        }
        allBoards.add(newBoard); // total newBoard to allBoards
    }
    public boolean isSafe(int row,int col,char[][]board)
    {
        //now we have to check all the 8 directions like horizontal , vertical , upper left , upper right , lower left , lower right

        //horizontal we have to go each columns 

            for(int j=0;j<board.length;j++)
            {
                if(board[row][j] == 'Q')
                {
                    return false;
                }
            }
                 //vertical we have to go each rows
            for(int i=0;i<board[0].length;i++){
                if(board[i][col] == 'Q')
                {
                    return false;
                }
            }

            //upper left
            //for this we know row and col so [row-1][col-1]
            int r = row;
            for(int c=col; c>=0 && r>=0;c--,r--)
            {
                if(board[r][c] == 'Q')
                {
                    return false;
                }
            }
            //upper right
            //for thsi we know row and col so [row-1][col-1]
             r=row;

            for(int c=col;c<board.length && r>=0;r--,c++)
            {
                 if(board[r][c] == 'Q')
                {
                    return false;
                }
            }

            //lower left
            //for this [row+1][col-1]
            r=row;
            for(int c=col;r<board[0].length && c>=0;r++,c--)
            {
                 if(board[r][c] == 'Q')
                {
                    return false;
                }
            }

            //lower right
            // for this [row+1][col+1]
            r=row;
            for(int c=col;c<board.length && r<board.length;c++,r++)
            {
                 if(board[r][c] == 'Q')
                {
                    return false;
                }
            }
            return true;
    }
    public void placement(char[][]board,List<List<String>> allBoards,int col)
    {
        //this will print the . or Q and do backtracking with respect to each column
        //base case
        if(col == board.length)
        {
            saveBoard(board,allBoards);
            return ;
        }
        for(int row = 0;row<board.length;row++)
        {
            if(isSafe(row,col,board)){
                board[row][col] = 'Q';
                placement(board,allBoards,col+1);
                board[row][col] = '.';
            }
        }
    }
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> allBoards = new ArrayList<>();
        char[][] board = new char[n][n];
        placement(board,allBoards,0);
        return allBoards;
    }   
}