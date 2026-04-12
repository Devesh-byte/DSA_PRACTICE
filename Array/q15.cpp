#include <bits/stdc++.h>
using namespace std; 
// longest subarray with sum k(positivrs)
// brute force is create all subarray that will have the sum == k then see the max size;
// better will be on2
// optimal is prefix sum


int main() {
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    // int m = -1;
    // for(int i = 0 ; i < n ; i++){
    //     int sum = 0;
    //     for(int j = i ; j  < n  ;j++){
    //         sum+=arr[j];
    //         if(sum == k){
    //             m = max(m , j-i+1);
    //         }
    //     }
        
    // }
    // cout << m << endl;
    map<long long, int>presumMpp;
    long long sum =0 ;
    int maxlen = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        int rem = sum-k;
        if(presumMpp.find(rem)!=presumMpp.end()){
            int len= i - presumMpp[rem];
            maxlen = max(maxlen, len);
        }
        if(presumMpp.find(sum)==presumMpp.end()){
            presumMpp[sum] = i;
        }
    }

    cout << maxlen << endl;
    
    return 0;
}