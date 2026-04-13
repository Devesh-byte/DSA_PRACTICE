#include <bits/stdc++.h>
using namespace std; 
// Reverse Words in a String

int main() {
    vector<string>ans;
    string a = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != ' '){
            a+=s[i];
        }
        else if (!a.empty()) { // Handle multiple spaces
            ans.push_back(a);
            a = "";
        }

    }

     if (!a.empty()) ans.push_back(a); // 1. Push the final word

    reverse(ans.begin(), ans.end()); 

    string result = "";
    for(int i = 0 ; i < ans.size() ; i++){
        if(i!=ans.size()-1){
            result+=ans[i];
            result+=" ";
        }
        else{
            result+=ans[i];
        }
    }

    return result;
    return 0;
}