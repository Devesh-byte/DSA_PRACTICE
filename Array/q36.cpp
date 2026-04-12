#include <bits/stdc++.h>
using namespace std; 
// find the missing and repeating number 

int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    int n = nums.size();

    int sum_of_n = (n*(n+1))/2;
    int sum_of_arr =  0;
    int sq_sum_of_n = (n*(n+1)*(2*n+1))/6;
    int sq_sum_of_arr = 0;
    for(int i = 0  ; i < n ;i++){
        sum_of_arr += nums[i];
        sq_sum_of_arr += pow(nums[i],2);
    }
    int val1 = sum_of_arr - sum_of_n;
    int val2 = sq_sum_of_arr - sq_sum_of_n;
     val2 = val2/val1;
    int x = (val1+val2)/2;
    int y = x-val1;
    cout << x << " " << y <<endl;
    
    return 0;
}