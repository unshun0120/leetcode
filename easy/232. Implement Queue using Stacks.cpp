class MyQueue {
public:
    int q[100];
    int top = 0;
    int bot = 0;
    MyQueue() {

    }
    
    void push(int x) {
        q[top] = x;
        top++;
    }
    
    int pop() {
        int popelement = q[bot];
        bot++;
        return popelement;
    }
    
    int peek() {
        return q[bot];
    }
    
    bool empty() {
        if( top == bot )
            return true;
        else
            return false;
    }
};

