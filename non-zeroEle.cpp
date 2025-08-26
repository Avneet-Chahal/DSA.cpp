// 8. count non zero elements in sparse matrix

#include<iostream>
using namespace std;
int main(){
    int mat[4][4]={
        {0,0,0,1},
        {2,0,0,0},
        {0,0,3,0},
        {0,0,0,5}
    };
    int c=0;
    for(int i=0;i<4;++i)
    for(int j=0;j<4;++j)
    if(mat[i][j]!=0)
    c++;
    cout<<"Non zero elements :"<<c;

}