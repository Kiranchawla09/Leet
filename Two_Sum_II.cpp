class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> res;
        int n= numbers.size();
        int i=0, j=n-1;
        while (i<n && j>=0 && i!=j)
        {
            if (numbers[j]+numbers[i]==target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            if (numbers[j]+numbers[i]<target)
            {
                i++;
            }
                if (numbers[j]+numbers[i]>target)
                {
                    j--;
                }
        }
        return res;
    }
};