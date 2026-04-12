#include <bits/stdc++.h>

using namespace std; 
// 3 sum


int main() {
    int arr[] = {-1,0,1,2,-1,-4};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
       vector<vector<int> > ans;
    for(int i = 0 ; i < n ; i++){
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum  == 0){
                //ans.push_back(arr[i], arr[j], arr[k]);
                ans.push_back({arr[i], arr[j], arr[k]});

                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k - 1]) k--;


            }
            else if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
        }
    }
    for (auto triplet : ans) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "] ";
    }

    return 0;
}