#include <bits/stdc++.h>
using namespace std; 
// set value of matrix to 0 for row and colum where it belongs 
// brute force is finding 0 then marking row and colum as -1 then marking -1 to 0
// better solution is having row and col array that will be marked if there is 0 in the martix then made as 0;

int main() {
    int arr[3][3] = {{1,1,1},{1,0,1},{1,1,1}}; 
    int n = 3; //rows
    int m = 3; // colm;
    int row[3] = {0};
    int col[3] = {0};
    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j < m ;j++){
            if(arr[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j < m ;j++){
            if(row[i] == 1 || col[j]==1){
                arr[i][j] = 0;
            }
        }
    }

    for(int i = 0 ; i < n ;i++){
        for(int j = 0; j < m ;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}