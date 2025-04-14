#include <iostream>
#include <stack>

using namespace std;

// class Solution {
// public:
//     string clearDigits(string s) {

//         stack <char> strStack;

//         for (int i = 0; i < s.length(); i++) {

//             char ch = s[i];  

//             if(!isdigit(ch)){
//                 strStack.push(ch);
//             }
//             else{
//                 if(!strStack.empty()){
//                     strStack.pop();
//                 }
//             }

//         }
//         return strStack;
//     }
// };


string clearDigits(string s) {

    string str = "";
    for(int i = 0 ; i < s.length(); i++ ){

        char ch = s[i];

            if(!isdigit(ch)){
                str.push_back(ch);
            }
            else{
                if(!str.empty()){
                    str.pop_back();
                }
            }
        }
    return str;
}

int main() {
    
    cout << clearDigits("abc") << endl;
    cout << clearDigits("cb34") << endl;

    return 0;
}

