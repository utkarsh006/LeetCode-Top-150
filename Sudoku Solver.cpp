class Solution {

public: bool isValidPalacement(vector < vector < char >> & board,char num,int row,int col)
         {
                    int nr= 3* (row/3);
                    int nc= 3* (col/3);
             for(int i=0;i<9;i++)
             {
        if(board[i][col]==num or board[row][i]==num or board[nr + (i/3)][nc + (i%3)]==num)
            return false;     
             }
    return true;
}

bool solveSudoku(vector < vector < char >> & board) 
{
      for(int i=0;i<board.size();i++)
      { 
          for(int j=0;j<board.size();j++)
          {
               if(board[i][j]=='.')
               {
                 for(char k='1'; k<='9';k++)
                 {
                     if(isValidPalacement(board,k,i,j))
                     {
                       board[i][j]=k;
                       if(solveSudoku(board))
                          return true;
                       board[i][j]='.';  // backtrack
                     }
                 }
            
                 return false;
               }
        }        
    }   
    return true;
}
    
};
