#include <bits/stdc++.h>
using namespace std; 
// maximum producti in sub array

int main() {
    vector<int> nums = {2, 3, -2, 4};
    int n = nums.size();
    int prod = 1;
    int max_prod1 = INT_MIN;
    int max_prod2 = INT_MIN;

    for(int i = 0 ; i  < n ; i++){
        prod *= nums[i];
        if(prod > max_prod1){
            max_prod1 = prod;
        }
    }
    prod = 1;
    for(int i = n-1 ; i>=0 ; i--){
        prod *= nums[i];
        if(prod > max_prod2){
            max_prod2 = prod;
        }
    }
    cout << max(max_prod1,max_prod2) << endl;


    
    
    return 0;
}