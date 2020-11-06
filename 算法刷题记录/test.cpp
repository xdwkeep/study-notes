#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    unordered_map<char,int> m{{'(',1},{'[',2},{'{',3},
                            {')',4},{']',5},{'}',6}};
    stack<char> st;
    bool istrue = true;
    for (auto c : s) {
        int num = m[c];
        if (num >=1 && num <= 3) {
            st.push(c);
        } else if(!st.empty() && m[st.top()] == num - 3) {
            st.pop();
        } else {
            istrue = false;
            break;
        }
    }
    if (!st.empty()) {
        istrue = false;
    }
    return istrue;
}

int main() {
    string s = "()";
    cout << isValid(s) << endl;
    return 0;
}