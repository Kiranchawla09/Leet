class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n= arr.size();
        int exp_size= n/2;
        int ans=0;
        for (int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for (auto itr:mp)
        {
            if (itr.second!=0)
            {
                pq.push(make_pair(itr.second,itr.first));
            }
        }
        while (n>exp_size && !pq.empty())
        {
            auto x= pq.top();
            pq.pop();    
            n-=x.first;
            ans++;
        }
        return ans;
    }
};