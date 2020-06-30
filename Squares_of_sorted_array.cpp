class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (int i=0;i<A.size();i++)
        {
            if (A[i]<0)
                A[i]=abs(A[i]);
        }
        sort (A.begin(),A.end());
        for (int i=0;i<A.size();i++)
        {
            A[i]= A[i]*A[i];
        }
        return A;
    }
};