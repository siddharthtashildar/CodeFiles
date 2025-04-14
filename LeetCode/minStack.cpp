#include <iostream>
#include <stack>

using namespace std;

class MinStack {

    private:

        stack <int> minStack, mainStack;

    public:

        MinStack() {

        }
        
        void push(int val) {
            mainStack.push(val);

            if( minStack.empty() || val <= minStack.top() ){                     
                minStack.push(val);
            }
        }
        
        void pop() {
            if(mainStack.top() == minStack.top()){
                minStack.pop();
            }

            mainStack.pop();
        }
        
        int top() {
            return mainStack.top();
        }
        
        int getMin() {
            return minStack.top();
        }
};

int main() {

    MinStack Stack;
    Stack.push(-2);
    Stack.push(0);
    Stack.push(-3);
    
    cout << Stack.getMin() << endl; 
    Stack.pop();
    cout << Stack.top() << endl;    
    cout << Stack.getMin() << endl; 
    return 0;
}
