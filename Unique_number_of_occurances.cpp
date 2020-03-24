class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> st;
        unordered_map<int,int>mp; 
        for (int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for (auto itr : mp)
        {
            st.insert(itr.second);
        }
        if (st.size()!=mp.size())
            return false;
        return true;
    }
};