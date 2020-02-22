class Solution {
public:
    bool isValid(string s) {
        if (s== "") return true;
        if (s.length()%2==1)
        {
            return false;
        }
        stack <char> stack;
       for (char i:s)
       {
           if ((i== '{'|| i== '[') || i== '(')
           {
               stack.push(i);
           }
           else if (i=='}')
           {
               if (stack.empty()|| stack.top()!='{')
                   return false;
               else 
                   stack.pop();
           }
           else if (i==')')
           {
               if (stack.empty()|| stack.top()!='(')
                   return false;
               else 
                   stack.pop();
           }
           else if (i== ']')
           {
               if (stack.empty()|| stack.top()!= '[')
                   return false;
               else 
                   stack.pop();
           }
       }
        if (stack.empty())
            return true;
        else 
            return false;
    }
};