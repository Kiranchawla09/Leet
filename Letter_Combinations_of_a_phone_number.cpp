class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return vector<string>();
        vector <string> ans;
        vector <string> letters={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ans.push_back("");
        for (int i=0;i<digits.size();i++)
        {
            int num= digits[i]-'0';
            string temp= letters[num];
            vector<string> tmp;
            for (int j=0;j<temp.size();j++)
            {
                for (int k=0;k<ans.size();k++)
                {
                    tmp.push_back(ans[k]+temp[j]);
                }
            }
            ans.swap(tmp);
        }
    return ans;
    }
};