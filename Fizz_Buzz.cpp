class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> result(n);
        int i=0;
        while (i<n)
        {
            if ((i+1)%3==0)
            {
                result[i]+="Fizz";
            }
            if ((i+1)%5==0)
            {
                   result[i]+="Buzz";
            }
            if (result[i].empty())
            {
                result[i]+= to_string(i+1);
            }
            i++;
        }
        return result;
    }
};