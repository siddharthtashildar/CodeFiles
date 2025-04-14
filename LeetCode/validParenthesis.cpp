
#include <iostream>
#include <stack>

using namespace std;


bool isValid(string s) {

    stack <char> parenthesisStack;

    for (int i = 0; i < s.length(); i++) {

        char ch = s[i];  

        if(ch == '(' || ch == '[' || ch == '{'){
            parenthesisStack.push(ch);
        }
        else{
            if (parenthesisStack.empty()){
                return false;
            }

            char top = parenthesisStack.top();

            if( (top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}') ) {
                parenthesisStack.pop();
            }
            else{
                return false;
            }

        }
    }
        return parenthesisStack.empty();

}


int main() {
    cout << boolalpha; 
    cout << isValid("()") << endl;       
    cout << isValid("()[]{}") << endl;   
    cout << isValid("(]") << endl;       
    cout << isValid("([])") << endl;     
    cout << isValid("{[()]}") << endl;   
    cout << isValid("{[(])}") << endl;   
    return 0;
}