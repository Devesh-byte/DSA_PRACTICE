#include <bits/stdc++.h>
using namespace std;
// ;eft rotate the array by D places 
// easy way is reverse(a,a+d) , reverse(a+d,a+n) , reverse(a,a+n)


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/ sizeof(int);
    int d= 3;
    d= d%n;
    // temp arr
    int temp[d];
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }
    // shifting
    for(int i = d ; i < n; i++){
        arr[i-d] = arr[i];
    }

    // placing the tmep arr
    for(int i = n-d ;i < n ;i++){
        arr[i] = temp[i-(n-d)];
    }

    for(auto x :arr){
        cout << x <<" ";
    }
    
    return 0;
}