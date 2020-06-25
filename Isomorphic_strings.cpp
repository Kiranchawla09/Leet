class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        set<char> visited;
        for (int i=0;i<s.size();i++)
        {
            if (mp.find(s[i])==mp.end())
            {
                mp[s[i]]=t[i];
                if (visited.find(t[i])==visited.end())
                {
                    visited.insert (t[i]);
                }
                else 
                {
                    for (auto itr: mp)
                    {
                        if (itr.second==t[i])
                        {
                            if (itr.first!= s[i])
                                return false;
                        }
                    }  
                }
            }
            else if (mp.find(s[i])!=mp.end())
            {
                map<char,char> ::iterator itr= mp.find(s[i]);
                if (itr->second!= t[i])
                {
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};
