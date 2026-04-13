#include <bits/stdc++.h>
using namespace std; 
//Remove Outermost Parentheses

int main() {
    stack<char>st;
    string ans = "";
    for(char ch: s){
        if(ch == '('){
            st.pop();
        }
        if(!(st.empty())){
            ans+=ch;
        }
        if(ch == ')'){
            st.push('(');
        }
    }

    
    return 0;
}