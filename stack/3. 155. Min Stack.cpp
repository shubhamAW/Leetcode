//warning : runtime error 

class MinStack {
private:
    int mini=INT_MAX;
    vector<int>min;
    vector<int>stack;
    int index;
    
public:
    MinStack() {
        index=-1;
    }
    
    void push(int val) {
        if(val<mini) {
            mini=val;
            min.push_back(val);
        }
        stack[++index]=val; 
    }
    
    void pop() {
        if(min.back()==stack[index]){
            min.pop_back();
            mini=min.back();
        }
        index--;

    }
    
    int top() {
        return stack[index];
    }
    
    int getMin() {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
