#include <bits/stdc++.h>
using namespace std; 
//longest subarry which is odd num;

int main() {
    string num = "32";
    int n =num.size();
    int index = -1;
    for(int i =n-1; i>=0 ;i-- ){
        if(int(num[i])%2!=0){
            index = i;
            break;
        }
    }
    if(index == -1){
        return "";
    }
    string res = "";
    for(int i =0 ;i <=index ; i++){
        res+=num[i];
    }
    return res;
    
    return 0;
}