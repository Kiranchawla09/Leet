class Solution {
public:
    bool divisorGame(int N) {
        bool returnval= false;
        int i=0;
        while (N>1)
        {
            for (i=1;i<N;i++)
            {
                if (N%i==0)
                {
                    break;
                }
            } 
        
        if (N%i==0)
        {
            N-=i;
            returnval= !returnval;
        }
            else
                break;   
        }
        return returnval;
    }
};