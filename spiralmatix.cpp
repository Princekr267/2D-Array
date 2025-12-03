#include<iostream>
using namespace std;
int main(){
    int arr2[3][4]={{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}};
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr2[i][j];
    //     }
    // }
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }   
    // cout<<endl;
    
    int sRow=0, sColumn=0, m=3, n=4;
    int eRow=m-1, ecolumn=n-1;
    while(sRow<=eRow && sColumn<=ecolumn){
        //Top
        for(int j=sColumn; j<=ecolumn; j++){
            cout<<arr2[sRow][j]<<" ";
        }
        cout<<endl;
        //Right
        for(int j=sRow+1; j<=eRow; j++){
            cout<<arr2[j][ecolumn]<<" ";
        }
        cout<<endl;
        //Bottom
        for(int j=ecolumn-1; j>=sColumn; j--){
            if(sRow==eRow){
                break;
            }
            cout<<arr2[eRow][j]<<" ";
        }
        cout<<endl;
        //Left
        for(int j=eRow-1; j>=sRow+1; j--){
            if(sColumn==ecolumn){
                break;
            }
            cout<<arr2[j][sColumn]<<" ";
        }
        cout<<endl;
        sRow++, sColumn++, ecolumn--, eRow--;
    }
    
    return 0;
}