#include <bits/stdc++.h>
using namespace std; 
// find the number that occurs once and other occur twice 
// brute force will be running 2 loop to check if the number number occur twice or once 
// better solution is hashing 


int main() {
    int arr[] = {1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(int);
    // int m = INT_MIN;
    // for(int i = 0 ; i < n ; i++){
    //     m = max(m, arr[i]);
    // }
    // vector<int> hash(m + 1, 0);
    // for(int i = 0 ; i < n ;i++){
    //     int x = arr[i];
    //     hash[x]++;
    // }

    // for(int i = 0 ; i <= m ;i++){
    //     if(hash[i]==1){
    //         cout << i << endl;
    //         break;
    //     }
    // }
    int x = 0;
    for(int i = 0 ; i < n; i++){
        x ^= arr[i];
    }
    cout << x << endl;

    

    
    return 0;
}