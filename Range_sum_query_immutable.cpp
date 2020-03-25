class NumArray {
public:
    vector<int> tab = {0};
    NumArray(vector<int> &nums) {
       int summ = 0;
        for (int n=0;n<nums.size();n++) {
            summ += nums[n];
            tab.push_back(summ);
        }
    }
    int sumRange(int i, int j) {
        return tab[j+1] - tab[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */