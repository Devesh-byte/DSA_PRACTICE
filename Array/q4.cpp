// Check if the array is sorted 
#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[] , int n ){
    bool flag = true;
    for(int i = 1 ; i < n ; i++){
        if(arr[i-1] > arr[i]){
            flag = false;
            break;
        }
    }
    return flag;
}


int main(){
    int arr[] = {1,24,213,3,12};
    int arr1[] = {1,2,3};
    int n = sizeof(arr1) / sizeof(int);

    bool x = sorted(arr1,n);
    cout << x << endl;

    return 0 ;
}