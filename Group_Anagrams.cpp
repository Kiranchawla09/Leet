class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> result;
        vector<string> sub;
        map <string,vector<string>>mp;
        for (string s : strs)
        {
            string t= s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        for (auto itr:mp)
        {
            result.push_back(itr.second);
        }
        return result;
    }
};