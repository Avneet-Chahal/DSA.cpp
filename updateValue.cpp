// 6. to update the value at the given index

#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4};
    int n=4,pos=2,val=35;
    for(int i=0;i<n;i++){
        arr[pos]=val;
    cout<<arr[i]<<" ";
    }
}