class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k= k%n;
        if (n<=1 || k==0)
         return;
        int i=0;
        int temp=0, temp1=nums[0];
        int last=0;
        int first=0;
        while (i<n)
        {
            temp= temp1;
            temp1= nums[(last+k)%n];
            nums[(last+k)%n]= temp;
            last= (last+k)%n;
            i++; 
            
            if(first==last)
            {
                first++;
                last++;
                temp1= nums[first];
            }
        }
    }
};