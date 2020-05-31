class Solution {
public:
    void backtrack(string &S, int i, vector<string>&res)
    {
        res.push_back(S);
        if (i>=S.size())
        {
            return;
        }
        //backtrack(s,i+1,res);
        for (int j=i;j<S.size();j++)
        {
        if (isalpha(S[j]))
        {
            S[j]^=32;  //Bitwise exclusive OR and assignment operator.
            backtrack(S,j+1,res);
            S[j]^=32;
        }
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector <string> res;
        backtrack(S, 0, res);
        return res;
    }
};