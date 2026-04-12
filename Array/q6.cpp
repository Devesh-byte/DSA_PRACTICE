#include <bits/stdc++.h>
using namespace std; 
// lwft rottate the array by one 
// brute is temp  = arr[0] then moving everythign to left and at least arr[n-1] = temp


int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int temp = arr[0];
    for(int i = 1 ; i < n ;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
    
    return 0;
}