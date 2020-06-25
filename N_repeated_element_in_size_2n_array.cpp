class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int,int>mp;
        int n= A.size()/2;
        
        for (int i=0;i<A.size();i++)
        {
            mp[A[i]]++;
        }
        for (auto itr: mp)
        {
            if (itr.second==n)
                return itr.first;
        }
        return n;
    }
};