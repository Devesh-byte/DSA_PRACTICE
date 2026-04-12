#include <bits/stdc++.h>
using namespace std;
// brute force is sort it then print arr[0]; O(nlogn+n)
//optimal is this , O(N)
int main(){
    int arr[] = {1,24,213,3,12};
    int smallest = arr[0];
    int n = sizeof(arr)/ sizeof(int);
    for(int i = 1; i< n ; i++ ){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    cout << smallest << endl;


    return 0;
}