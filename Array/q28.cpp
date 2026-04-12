#include <bits/stdc++.h>
using namespace std; 
// pascall triangle 

int main() {
    vector<int> vr;
    int r;
    cin >> r ;

    vr.push_back(1);
    int a = 1;
    for(int i = 1 ; i <= r; i++){
        a = a *(r-i+1)/i;
        vr.push_back(a);
    } 

    for(int i = 0 ; i <vr.size();i++ ){
        cout << vr[i] << " ";
    }
    
    return 0;
}