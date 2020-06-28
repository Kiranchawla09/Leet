class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<pair<int,int>> st;
        pair p= make_pair(0,0);
        st.insert(p);
        for (int i=0;i<path.size();i++)
        {
            if (path[i]=='N')
            {
                y++;
            }
            if (path[i]=='S')
            {
                y--;
            }
            if (path[i]=='E')
            {
                x++;
            }   
            if (path[i]=='W')
            {
                x--;
            }
            pair t= make_pair(x,y);
            if (st.find(t)!=st.end())
                return true;
            st.insert(t);
        }
        return false;
    }
};