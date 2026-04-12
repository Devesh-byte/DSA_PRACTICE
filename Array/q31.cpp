#include <bits/stdc++.h>
using namespace std; 
// four sum

int main() {
    int arr[] = {1, 0, -1, 0, -2, 2};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
    vector<vector<int> > ans;
    for(int i = 0 ; i < n ; i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;
        for(int j = i +1 ; j < n ; j++){
            if(j > i+1 && arr[j] == arr[j-1]) continue;
            int k = j+1;
            int l = n -1;
            while(k < l){
               int  sum = arr[i] + arr[j] + arr[k] + arr[l];
                if(sum == 0){
                    ans.push_back({arr[i] , arr[j] ,arr[k] , arr[l] });
                    k++;
                    l--;
                    while(k  < l && arr[k] == arr[k-1]) k++;
                    while(k  < l && arr[l] == arr[l+1]) l--;
                }
                else if(sum > 0) {
                    l--;
                }
                else if(sum < 0 ){
                    k++;
                }
            }
        }
    }

    for (auto quad : ans) {
        cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << "] ";
    }
    return 0;
}