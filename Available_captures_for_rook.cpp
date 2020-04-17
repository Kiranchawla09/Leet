class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0;
        for (int i=0;i<8;i++)
        {
            for (int j=0;j<8;j++)
            {
                if (board[i][j]=='R')
                    //4 Directions
                    return cap(board,i,j,0,1)+cap(board,i,j,0,-1)+cap(board,i,j,1,0)+cap(board,i,j,-1,0);
            }
        }
        return 0;
    }
    int cap(vector<vector<char>>&board, int i, int j, int dx, int dy)
    {
        while (i>=0 && j>=0 && i<board.size()&& j<board.size()&& board[i][j]!='B')
        {
            if (board[i][j]=='p')
            return 1;
            i+=dx;
            j+=dy;
        }
       return 0;
    }
};