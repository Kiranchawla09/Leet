class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<bool> N(n, false);
        vector<bool> M(m, false);
        
        for (int i=0;i<indices.size();i++)
        {
           N[indices[i][0]]= N[indices[i][0]]^true;
           M[indices[i][1]]= M[indices[i][1]]^true;
        }
        int r=0,c=0;
        for (int i=0;i< N.size();i++)
        {
            if (N[i])
            r++;
        }
        for (int i=0;i<M.size();i++)
        {
            if (M[i])
                c++;
        }
        
        
        return r*m+c*n-2*r*c;
    }
};