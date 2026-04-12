#include <bits/stdc++.h>
using namespace std; 
// subarray that has xor value to k 

int main() {
    int arr[] = {4, 2, 2, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k  = 6;
    unordered_map<int,int>mpp;
    mpp[0] = 1;
    int prefixxor = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        prefixxor = prefixxor ^ arr[i];
        int Target = prefixxor ^ k;
        if(mpp.find(Target)!=mpp.end()){
            cnt+= mpp[Target];
        }
        mpp[prefixxor]++;
    }

    cout << cnt << endl;
    
    return 0;
}