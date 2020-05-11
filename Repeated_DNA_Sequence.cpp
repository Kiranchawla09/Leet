class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map <string, int> mp;
         vector<string> res;
        if (s.size()<10)
            return res;
        for (int i=0;i<=s.size()-10;i++)
        {
            string temp= s.substr(i,10);
            mp[temp]++;
        }
        for (auto itr: mp)
        {
            if (itr.second >1)
            {
                res.push_back(itr.first);
            }
        }     
        return res;
    }
};