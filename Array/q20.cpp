#include <bits/stdc++.h>
using namespace std; 
// rearrage array by sign 
// brute force is create 2 arr one pos then one neg then put elemt accounrding then add pos to even places in orginal arr and neg in odd places 



int main() {

    int arr[] = {3,1,-2,-5,2,-4};
    int n = sizeof(arr)/ sizeof(int);
    vector<int>pos;
    vector<int>neg;
    for(int i = 0 ; i < n;i++){
        if(arr[i] < 0 ){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    int x = 0;
    int y = 0;
    for(int i = 0 ; i < n ;i++){
        if(i %2 ==0){
            arr[i] = pos[x];
            x++;
        }
        else{
            arr[i] = neg[y];
            y++;
        }
    }
    for(auto x : arr){
        cout << x << " ";
    }
    
    return 0;
}