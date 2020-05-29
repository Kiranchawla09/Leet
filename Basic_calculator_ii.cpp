class Solution {
public:
    int calculate(string s) {
        string ch;
        for (int i=0;i<s.size();i++)  //removing the spaces
        {
            if (s[i]==' ')
                continue;
            ch+=s[i];
        }
        s=ch;
        stack<int> stk;
        string curr_num;
        char op= '+';
        for (int i=0;i<s.size();i++)
        {
            while (isdigit(s[i]))
            {
                curr_num+=s[i];
                i++;
            }
            if (op=='+')
                stk.push(stoi(curr_num));
            if (op=='-')
                stk.push(-1*stoi(curr_num));
            if (op=='*')
            {
                int prev_num= stk.top();
                stk.pop();
                stk.push (prev_num * stoi (curr_num));
            }
            if (op=='/')
            {
                int prev_num=stk.top();
                stk.pop();
                stk.push(prev_num/ stoi(curr_num));
            }
            curr_num.clear();
            op=s[i];
        }
        int ans=0;
        while (!stk.empty())
        {
            ans+= stk.top();
            stk.pop();
        }
        return ans;
    }
};