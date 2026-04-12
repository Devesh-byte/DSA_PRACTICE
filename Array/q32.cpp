#include <bits/stdc++.h>
using namespace std; 
// longest subarray that has the sum 0 

int main() {
    int arr[] = {9,-3,3,-1,6,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int maxi = 0;
    unordered_map<int,int>mpp;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }

    cout << maxi << endl;
    return 0;
}