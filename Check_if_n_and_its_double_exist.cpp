class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort (arr.begin(),arr.end());
        int j= arr.size()-1, i=j-1;
        
        while (i>=0 && j>=i)
        {
            if (arr[i]>=0 && arr[j]>=0)
            {
            if (arr[j]==arr[i]*2)
            {
                if (i!=j)
                {
                return true;
                break;
                }
                else
                    i--;
            }
            else if (arr[j]<arr[i]*2)
            {
                i--;                    
            }
            else if (arr[j]> arr[i]*2)
            {
                j--;
            }
            }
            else if (arr[i]<0 && arr[j]<0)
            {
                if (arr[i]==arr[j]*2)
            {
                return true;
                break;                                           
            }
            else if (arr[i]<arr[j]*2)
            {
                j--;                    
            }
            else if (arr[i]> arr[j]*2)
            {
                i--;
            }
            }
            else if (arr[i]<0 || arr[j]<0)
            {
                j--;
                i--;
            }
        }
          return false;
    }
  
};