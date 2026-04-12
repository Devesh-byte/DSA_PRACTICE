#include <bits/stdc++.h>
using namespace std; 
//Two Sum any 2 elements whose sum is equal to target 
// brute force is 2 for loop to see which 2 element have the sum equl to target
// better is using hashmap
// optimal is 2 pointer 

int main() {
    int arr[] = {2,6,5,8,11};
    int target = 14;
    int n = sizeof(arr)/sizeof(int);
    // unordered_map<int,int> mp;
    // int ans[2];
    // for(int i = 0 ; i < n ;i++){
    //     int rem = target - arr[i];
    //     if(mp.find(rem)==mp.end()){
    //         mp[arr[i]] = i;
    //     }
    //     else{
    //         ans[0] = mp[rem];  
    //         ans[1] = i;        
    //         break;         
    //     }
    // }
    // cout << ans[0] << ans[1] << endl;

    sort(arr,arr+n);
    int left = 0;
    int right = n-1;
    while(left <= right){
        if(arr[left]+arr[right] > target){
            right--;
        }
        else if(arr[left]+arr[right] < target){
            left++;
        }
        else{
            break;
        }
    }
    cout << left << right << endl;
    return 0;
}