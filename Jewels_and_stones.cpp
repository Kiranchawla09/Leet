class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        int count=0;
        for (int i=0;i<J.size();i++)
            s.insert(J[i]);
        
        for (int j=0;j<S.size();j++)
        {
            if (s.find(S[j])!=s.end())
                count++;
        }
        return count;
    }
};