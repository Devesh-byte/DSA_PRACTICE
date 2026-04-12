#include <bits/stdc++.h>
using namespace std; 
// move all zero to the end of the array


int main() {
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr) / sizeof(int);
    // brute force
    // vector<int>temp;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i]!=0){
    //         temp.push_back(arr[i]);
    //     }
    // }
    // for(int i = 0 ; i < temp.size() ; i++){
    //     arr[i] = temp[i];
    // }
    // for(int i = temp.size() ; i < n ;i++){
    //     arr[i] = 0;
    // }

    // for(auto x: arr){
    //     cout << x << " ";
    // }

    int i = 0 ;
    for(int j = 1; j< n ;j++){
        if(arr[j]!=0){
            i++;
            arr[i] = arr[j];
        }
    }
    for(int j = i ; j < n ;j++){
        arr[j] = 0;
    }
    for(auto x:arr){
        cout << x << " ";
    }
    return 0;
}