#include <bits/stdc++.h>
using namespace std; 
// majority of element >n/2 times
// brute force will be checking cnt for eact element 
// better solution is hashing using map
// optimal solution is moore's voting algo


int main() {
    int arr[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = sizeof(arr)/sizeof(int);
    int el = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ;i ++){
        if(cnt == 0){
            el =arr[i];
            cnt =1;

        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i =0 ; i < n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }

    if(cnt1 > n/2){
        cout << el << endl;
    }
    else{
        cout << -1 << endl;
    }

    
    return 0;
}