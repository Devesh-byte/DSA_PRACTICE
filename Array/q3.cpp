// Second largest in array
// Second Smallest in array
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[] , int n){
    int largest = arr[0];
    int secondLargest = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int secondSmallest(int arr[] , int n){
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main(){
    int arr[] = {1,24,213,3,12};
    int n = sizeof(arr)/ sizeof(int);
    int x ;
    x = secondLargest(arr,n);
    int y ;
    y = secondSmallest(arr,n);
    cout  << x << y << endl;



    return 0 ;

}