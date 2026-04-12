#include <bits/stdc++.h>
using namespace std; 
//Maximum subarray sum 
// brute while is 0n3 completry to find the sum of all the subarray and find the largest one 
// better is 0n2 
// optimal sol is Kadame's algo




int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/ sizeof(int);
    int maxi = INT_MIN;
    int sum = 0 ;
    int start;
    int ansstart;
    int end;
    for(int i  = 0 ; i < n ;i++){
        if(sum == 0){
            start  = i;
        }
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansstart = start;
            end = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    for(int i =ansstart ; i <=end ; i++){
        cout <<arr[i] << " " ;
    }
    
    return 0;
}