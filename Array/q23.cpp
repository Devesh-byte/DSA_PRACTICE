#include <bits/stdc++.h>
using namespace std; 
// Longest consequestoc sequice 
// brute force is selecting an element then looping till the next element is the next number 
// better 
// optimal 

int main() {
    int arr[] = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    int n = sizeof(arr)/sizeof(int);
    //  if (n == 0) return 0; 
    // sort(arr,arr+n);
    // int currcnt = 0;
    // int prev = INT_MIN;
    // int longest  = 0;
    // for (int i = 0; i < n; i++) {
    //         // If consecutive number exists
    //         if (arr[i] - 1 == prev) {
    //             // Increment sequence count
    //             currcnt += 1; 
    //             // Update last smaller element
    //             prev = arr[i]; 
    //         } 
    //         // If consecutive number doesn't exits
    //         else if (arr[i] != prev) {
    //             // Reset count for new sequence
    //             currcnt = 1; 
    //             // Update last smaller element
    //             prev = arr[i]; 
    //         }
    //         // Update longest if needed
    //         longest = max(longest, currcnt); 
    // }
    // cout << longest << endl;

    if(n==0) return 0;

    // Initialize the longest sequence length
        int longest = 1; 
        unordered_set<int> st;
    
    // Put all the array elements into the set
     for (int i = 0; i < n; i++) {
         st.insert(arr[i]);
     }

    for(auto x : st){
        if(st.find(x-1) == st.end()){
            int cnt = 1;
            int a = x;

            while(st.find(a+1)!=st.end()){
                cnt++;
                a++;
            }
            longest = max(longest,cnt);
        }
    }

    cout << longest << endl;
    
    return 0;
}