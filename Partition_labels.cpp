class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector <int> result;
        unordered_map<char,int>mp;
        for (int i=0;i<S.size();i++)
        {
            mp[S[i]]=i;      //storing the last occurance of each letter
        }
        int start=0;
        int end= 0;
        
        for (int i=0;i<S.size();i++)
        {
            end= max(end,mp[S[i]]);
            if (i==end)
            {
                result.push_back(end-start+1);
                start=end+1;
            }
        }
        return result;
    }
};