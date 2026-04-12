#include <bits/stdc++.h>
using namespace std; 
// intersection 
// brute force will be teo loop with travesing each elemt to match and if keep  a track whether or not they are taken already or not 
// optimal is 2 poniter 

int main() {
    int arr1[] = {1,1,2,3,4,5};
    int n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2,3,4,4,5,6};
    int n2 = sizeof(arr2) / sizeof(int);
    set<int>inter;
    int i = 0 ;
    int j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            inter.insert(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto x: inter){
        cout << x<< " ";
    }

    return 0;
}