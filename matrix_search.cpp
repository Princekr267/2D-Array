#include<iostream>
using namespace std;
void brute_force(int mat[][4], int key){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]==key){
                cout<<"Index of key is ["<<i<<"]["<<j<<"]";
                break;
            }
        }
    }
}
void binary_search(int mat[][4], int n, int key){
    int st=0;
    while(st<n){
        int mid=(st+n-1)/2;
        if(mat[st][mid]==key)
        cout<<st<<" "<<mid;
        else if(mat[st][mid]<key){
            st++;
        }
        // ṇst++;
    }
}

void staircase(int mat[][4], int n, int key){
    int row=0, col=n-1;
    while (row<=n-1 || col>=0){
        if(mat[row][col]==key){
            cout<<row<<" "<<col;
            break;
        } else if(mat[row][col]<key){
            row++;
        } else if(mat[row][col]>key){
            col--;
        }
    }
    
}
int main(){
    int mat[4][4]={{1,2,3,4}, 
                   {5,6,7,8}, 
                   {9,10,11,12},
                   {13,14,15,16}};
    int key=14;
    staircase(mat, 4, key);
 //   brute_force(mat, 3, key);
    // binary_search(mat, 4, key);
    return 0;
}