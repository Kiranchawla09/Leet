class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector <int> new_vect;
        int carry=0;
        for (int i=A.size()-1;i>=0;i--)
        {
            int temp= K%10+carry+A[i];
            new_vect.push_back(temp%10);
            carry= temp/10;
            K/=10;
        }
        while (K)
        {
            int temp= K%10+carry;
            new_vect.push_back(temp%10);
            carry= temp/10;
            K/=10;
        }
        if (carry) new_vect.push_back(1); 
        
        reverse(new_vect.begin(), new_vect.end());  
        
        return new_vect;
       
    }
};
_