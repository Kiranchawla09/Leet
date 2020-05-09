class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> mp;
        vector <string> res;
        for (auto &i: cpdomains)
        {
            int num= stoi(i);
            int n= i.size()-1;
            while (i[n]!=' ')
            {
                if (i[n]=='.')
                    mp[i.substr(n+1)]+=num;
                n--;
            }
            mp[i.substr(n+1)]+=num;
        }
        for (auto &i: mp)
        {
            res.push_back(to_string(i.second)+" "+ i.first);
        }
        return res;
    }
};