#include <bits/stdc++.h>
using namespace std; 
// Leader of an array : every left to the right of it should be less than it 
// brute force will be select an eleemnt then check for it till end of array;
// optimal apporcah is traversing from right and seeing the maximum element 

int main() {
   // vector<int> arr = {10, 22, 12, 3, 0, 6};
   vector<int> arr = {10, 22, 12, 3, 0, 6};  
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int>ans;
    for(int i =n-1; i>=0;i--){
        if(arr[i] > maxi){
            maxi = arr[i];
            ans.push_back(maxi);
        }
    }
    for(auto x : ans){
        cout << x << " ";
    }
    
    return 0;
}