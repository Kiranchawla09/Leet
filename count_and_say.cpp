class Solution {
public:
    string countAndSay(int n) {
        string vect="";
     if (n==1)
     {
        vect.push_back('1');
     }
        else 
        {
            string out = countAndSay (n-1);
            auto prev= '0';
            auto count =0;
            for (auto &c: out)
            {
                if (prev!= c)
                {
                    if (count>0)
                    {
                       vect.push_back (count+48);
                        vect.push_back(prev);
                    }
                    prev= c;
                    count=0;
                }
                count++;  
            }
           
            vect.push_back(count+48);
            vect.push_back (prev);
            
        }
    return vect;
    }
};