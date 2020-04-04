class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector <int> ans;
        int n= A.size();
        int m= B.size();
        int sumA=0,sumB=0;
        for (int i=0;i<n;i++)
         sumA+= A[i];  
        for (int i=0;i<m;i++)
            sumB+=B[i];
        
        int diff= (sumA-sumB)/2;
        set <int> st;
        
        for (auto itr : A)
            st.insert(itr);
        
        for (auto itr2 : B)
        {
            if (st.find(diff+itr2)!=st.end())
            {
                ans.push_back(diff+itr2);
                ans.push_back(itr2);
                break;
            }
        }
     
        return ans;
    }
};