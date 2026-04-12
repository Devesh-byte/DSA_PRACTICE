#include <bits/stdc++.h>
using namespace std; 
// union of sorted array 


int main() {
    int arr1[] = {1,1,2,3,4,5};
    int n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2,3,4,4,5,6};
    int n2 = sizeof(arr2) / sizeof(int);
    set<int>un;
    int i = 0 ;
    int j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            un.insert(arr1[i]);
            i++;

        }
        else{
            un.insert(arr2[j]);

            i++;
        }
    }
    while(i < n1){
        un.insert(arr1[i]);
        i++;
    }
    while(j< n2){
        un.insert(arr2[j]);
        j++;
    }

    for(auto it:un){
        cout << it << " ";
    }
    
    return 0;
}