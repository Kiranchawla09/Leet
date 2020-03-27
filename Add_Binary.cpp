class Solution {
public:
    string addBinary(string a, string b) {
        string s{};
        if (b.size()>a.size())
        {
            int diff= b.size()-a.size();
            for (int k=0;k<diff;k++)
            {
                a.insert(a.begin(),'0');
            }
        }
        if (a.size()>b.size())
        {
            int diff= a.size()-b.size();
            for (int k=0;k<diff;k++)
            {
                b.insert(b.begin(),'0');
            }
        }
        int n= a.size();
        int m= b.size();
        
        int carry=0, i=n-1, j=m-1;
        
        while (i>=0 || j>=0)
        {
            if (a[i]=='0' && b[j]=='0')
            {
                if (carry==0)
                    s.push_back('0');
                else 
                {
                    s.push_back('1');
                    carry=0;
                }
            }
            if ((a[i]=='0' && b[j]== '1')|| (a[i]=='1' && b[j]=='0' ))
            {
                if (carry==0)
                {
                    s.push_back('1');
                    carry=0;
                }
                else
                {
                    s.push_back('0');
                    carry=1;
                }
            }
            if (a[i]=='1' && b[j]=='1')
            {
                if (carry==0)
                {
                    s.push_back('0');
                    carry= 1;
                }
                else
                {
                    s.push_back('1');
                    carry= 1;
                }
            }
            i--;
            j--;
        }
    reverse(s.begin(),s.end());
    if (carry==1)
        s.insert(s.begin(),'1');
    
        return s;
    }
};   