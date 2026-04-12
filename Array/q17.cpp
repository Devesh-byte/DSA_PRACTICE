#include <bits/stdc++.h>
using namespace std; 
// sort an array of 0's and 1's and 2's 
// count the number of 0 , 1 , 2 then just repplace in the array
//optimal is Detch National Flag algo

int main() {
    int arr[] = {0,1,1,0,1,2,1,2,0,0,0};
    int n= sizeof(arr)/sizeof(int);
    int low  = 0;
    int mid = 0;
    int high = n-1;
    while(mid  <= high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}