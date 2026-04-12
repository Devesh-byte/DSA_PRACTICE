#include <bits/stdc++.h>
using namespace std; 

int main() {
    int arr[] = {2,1,1,3,1,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    int el1 = 0, el2 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] == el1) cnt1++;
        else if (arr[i] == el2) cnt2++;
        else if (cnt1 == 0) { el1 = arr[i]; cnt1 = 1; }
        else if (cnt2 == 0) { el2 = arr[i]; cnt2 = 1; }
        else { cnt1--; cnt2--; }
    }

    cnt1 = 0; cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] == el1) cnt1++;
        else if (arr[i] == el2) cnt2++;
    }

    vector<int> ans;
    if (cnt1 > n/3) ans.push_back(el1);
    if (cnt2 > n/3) ans.push_back(el2);

    for(auto x: ans) cout << x << " ";
    
    return 0;
}
