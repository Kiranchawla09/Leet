class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set <char> row1= {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        unordered_set <char> row2= {'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
        unordered_set <char> row3={'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
        vector<string> res;
        for (auto &i:words)
        {
            bool d1=true, d2=true, d3=true;
            for (auto &j:i)
            {
                if (d1)
                {
                    auto itr= row1.find(j);
                    if (itr==row1.end())
                        d1=false;
                }
                if (d2)
                {
                    auto itr= row2.find(j);
                    if (itr==row2.end())
                        d2=false;
                }
                if(d3)
                {
                    auto itr= row3.find(j);
                    if (itr==row3.end())
                        d3=false;
                }
            }
            if (d1||d2||d3)
                res.push_back(i);
        }
        return res;
    }
    
};