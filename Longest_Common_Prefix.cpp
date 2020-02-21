class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int size= strs.size();
        int min = INT_MAX;
        for (auto str: strs)
        {
            if (min > str.size())
                min= str.size();
        }
         std::string r;
        for (int i=0;i<min;i++)
        {
            bool result= true;
            for (int j=0;j< size-1;j++)
            {
                result = result && (strs[j][i] == strs[j+1][i]);
            }
            if (result)
            {
                r.push_back (strs[0][i]);
            }
            else
                break;
        }
        return r;
    }
};
