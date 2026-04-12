#include <bits/stdc++.h>
using namespace std; 
// linear search

int main() {
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr) / sizeof(int);
    bool flag = false;
    int ans ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==3){
            flag =true;
            ans = i+1;
            break;
        }
    }
    if(flag){
        cout << ans << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}