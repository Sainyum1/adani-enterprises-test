

/*
1. Write a function to create a 2-D List/Array with random integers between 0 to 100.
 This function should take two arguments - numberOfRows and numberOfColumns and return 2D list.
2. Write a function to sort the 2-D list based on column index keeping the rows intact.
 This function should take two arguments - 2D list created above and column Index and return sorted 2D list.
*/


#include <bits/stdc++.h>
using namespace std;

//to create a new 2D array filled with random number between 0 and 100
vector<vector<int>> generateArray(int numRows, int numCol){
    vector<vector<int>> res(numRows, vector<int> (numCol,0));
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCol;j++){
            res[i][j]= (rand() % 101);
        }
    }
    return res;
}

//to sort the 2D array based on a particular column in ascending order
vector<vector<int>> sortArray(vector<vector<int>> v, int col){
    vector<vector<int>> res =  v;

    sort(begin(res),end(res),[&](vector<int> &a, vector<int>  &b){
        return a[col]<b[col];
    });
    return res;
}


int main() {
    int n,m;
    cout << "Enter number of rows and columns- " << endl;
    cin >> n >> m;
    vector<vector<int>> v = generateArray(n,m);

    cout << "Generated 2D Array- \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << " ";
        }cout << endl;
    }
    int col=0;
    cout << "Enter column number to sort the array (0-based)- \n";
    cin >> col;
    v = sortArray(v,col);

    cout << "Sorted 2D Array- \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << " ";
        }cout << endl;
    }



    return 0;
}