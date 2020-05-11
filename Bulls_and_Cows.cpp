class Solution {
public:
    string getHint(string secret, string guess) {
       
        int arr[10]={0};
        for (int i=0;i<secret.size();i++)
        {
            int a= (int)(secret[i]-'0');
            arr[a]+=1;
        }
        int m=0;
        int n=0;
        for (int i=0;i<guess.size();i++)
        {
            if (secret[i]==guess[i])
            {
                int a= (int)(secret[i]-'0');
                arr[a]--;
                m++;
            }
        }
        for (int i=0;i<guess.size();i++)
        {
            if (secret[i]!=guess[i])
            {
                int g= (int)(guess[i]-'0');
                if (arr[g]!=0)
                {
                    n++;
                    arr[g]--;
                }              
            }
        }
       string res=to_string(m)+"A"+to_string(n)+"B";    
        
        return res;
    }
};