#include <bits/stdc++.h>
using namespace std; 
// rotate matrix by 90 degree
// brute force is                 rotated[j][n - i - 1] = matrix[i][j];
// optimal solution is given below  

int main() {
     int matrix[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    int n = sizeof(matrix)/sizeof(matrix[0]);
    int m  = sizeof(matrix[0])/sizeof(int);

    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j < m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i = 0 ;i < n ;i++){
        reverse(matrix[i], matrix[i]+m);
    }

    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j < m;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    
    return 0;
}