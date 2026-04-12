#include <bits/stdc++.h>
using namespace std; 
// find the missing number 
// brute force is running the loop 1 to n and see which  number is missing 
// better solution is using hashing to see which element is not presesnt 
// optimal solution is using math or xor 

int main() {
    int arr[] = {1,2,4,3};
    int n = sizeof(arr)/sizeof(int);
    int N = 5;
    // int sum =( N * (N+1)) / 2;
    // int sum1 = 0;
    // for(int i = 0 ; i < n ; i++){
    //     sum1+=arr[i];
    // }
    // cout << sum - sum1 << endl;
    int x1 = 0 ;
    int x2 = 0;
    for(int i = 0 ; i < n ;i++){
        x1 = x1 ^ arr[i];
        x2 = x2 ^ (i+1);
    }
    x2 ^= N;
    int res = x1^x2;
    cout << res << endl;
    

    return 0;
}