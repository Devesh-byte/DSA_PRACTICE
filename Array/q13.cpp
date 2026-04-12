#include <bits/stdc++.h>
using namespace std; 
// maxi consecutive ones 
int main() {
    int arr[] = {1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(int);
    int m= 0; 
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == 1 ){
            cnt++;
            m = max(m,cnt);
        }
        else{
            cnt = 0;
        }

    }

    cout << m << endl;

    return 0;
}