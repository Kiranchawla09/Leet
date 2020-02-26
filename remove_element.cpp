class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std:: vector <int> :: iterator itr;
        itr= std:: remove (nums.begin(),nums.end(),val);
        nums.erase (itr,nums.end());
        return nums.size();
    }
};