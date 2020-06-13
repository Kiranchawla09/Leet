class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n==0)
        {
            return vector<string>();
        }
        vector <string> result;
        paran (result,n,0,"");
        return result;
    }
    void paran (vector<string>&result, int i,int j, string str)
    {
        if (i==0 && j==0)
        {
            result.push_back(str);
            return;
        }
        if (i>0)
        {
           paran(result, i-1,j+1, str+"(");
        }
        if (j>0)
        {
            paran (result, i, j-1, str+")");
        }
    }
};