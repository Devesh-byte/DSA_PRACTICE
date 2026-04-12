// remopve duplicates in place from sorted array
#include <bits/stdc++.h>
using namespace std;
// brute force will be create a set and add all elements in it so inly unique elemts will be added then add those to the arr 
// optimal solition is using 2 pointer method

int uniqu(int arr[] , int n){
    int i= 0;
    for(int j = 1 ; j < n ; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
            
            
        }
    }
    return i+1;
}

int main(){
    int arr[] = {1,24,1,213,3,213,12,3,12,12};
    int n = sizeof(arr)/ sizeof(int);
    sort(arr,arr+n);
    int x = uniqu(arr,n);
    cout << x << endl;

    

    return 0;
}