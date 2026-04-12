#include <bits/stdc++.h>
using namespace std; 
// permutation 


int main() {
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;
    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    for(int i = n-1 ; i>=0 ; i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }

    reverse(arr+index+1, arr+n);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}