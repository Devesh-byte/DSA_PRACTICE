#include <bits/stdc++.h>
using namespace std;
// brute force is sort it then print arr[n-1]; O(nlogn+n)
//optimal is this , O(N)
int main(){
    int arr[] = {1,24,213,3,12};
    int largest = arr[0];
    int n = sizeof(arr)/ sizeof(int);
    for(int i = 1; i< n ; i++ ){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    cout << largest << endl;


    return 0;
}