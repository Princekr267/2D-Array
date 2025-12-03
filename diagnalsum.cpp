#include<iostream>
using namespace std;
int diagonal_sum(int mat[][4], int n){  
    // O(n) -> time complexity
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=mat[i][i];
        if(i!=n-i-1)
        sum+=mat[i][n-i-1];
    }
    cout<<"sum = "<<sum<<endl;
    return sum;
}
int main(){
    int matrix[4][4]={{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};
    // int matrix[1][1]={{1}};
    int n=4;
    int diagsum=0;
    int row=n, col=n;
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(i==j){
                diagsum+=matrix[i][j];
            }
            else if(i+j==row-1){
                diagsum+=matrix[i][j];
            }
        }
    }
    cout<<"Diagonal Sum = "<<diagsum<<endl;  //Method 1  O(n^2);
    diagonal_sum(matrix, 4);
    return 0;
}
