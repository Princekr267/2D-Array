#include<iostream>
using namespace std;
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Addres = "<<mat<<", value = "<<*(*mat)<<endl;
    cout<<mat+1<<endl;
    cout<<*mat+1<<endl;
    return 0;
}