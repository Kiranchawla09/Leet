class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>mp;
        int temp;
        for (string s:emails)
        {  
            temp=0;
            for (int i=0;i<s.size();i++)
            {
                if (s[i]=='@' && temp==0)
                {
                    temp=1;
                    mp.insert(s);
                    break;
                }
                if (s[i]=='.'&& temp==0)
                {
                    s.erase(s.begin()+i);
                }
                if (s[i]=='+' && temp==0)
                {
                    int j= s.find('@');
                    s.erase(i,j-i);
                    mp.insert(s);
                }
            }
        }        
        return mp.size();
    }
};