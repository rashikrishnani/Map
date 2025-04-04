class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else{
                   for(int k=0;k<9;k++){
                    if(k!=j && board[i][j]==board[i][k]){
                        return false;
                    }
                    if(k!=i && board[i][j]==board[k][j]){
                        return false;
                    }
                    int l=3*(i/3)+k/3;
                    int m=3*(j/3)+k%3;
                    if(i!=l && j!=m && board[i][j]==board[l][m]){
                        return false;
                    }
                   }
                }
            }
        }
        return true;
    }

};
// https://leetcode.com/problems/valid-sudoku/submissions/1595383105/
