class Solution {
public:
    int maxindex(vector<int> &A, int end) 
    {
        int maxidx=0;
        int t= A[0];
        for (int i=1;i<=end;i++)
        {
            if (A[i]>t)
            {
                t= A[i];
                maxidx= i;
            }
        }
        return maxidx;
    }
    
    
    vector<int> pancakeSort(vector<int>& A) {
        vector <int> result;
        int n= A.size();
        for (int i=n-1;i>=0;i--)
        {
            int m= maxindex(A,i);
            result.push_back(m+1);
            result.push_back(i+1);
            reverse(A.begin(),A.begin()+m+1);
            reverse(A.begin(),A.begin()+i+1);
        }
        return result;
    }
};