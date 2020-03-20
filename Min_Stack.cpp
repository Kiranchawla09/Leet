class MinStack {
public:
    vector <int> vect;
    int min;
    /** initialize your data structure here. */
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int x) {
       
        if (x<=min)  
        {
            vect.push_back(min);
            min=x;       
        }
         vect.push_back(x);
        
    }
    
    void pop() 
    { 
        int t=vect.back(); //last element of the vector
        vect.pop_back(); 
        if (t== min)
        {
            min= vect.back();
            vect.pop_back(); 
        }
    } 
    int top() {
        return vect.back();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */