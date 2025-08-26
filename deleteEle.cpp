// 5. delete elements from a given position and decrease the size of array

#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4,5};
    int n=5,pos=2;
    for(int i=pos;i<n-1;++i)
    arr[i]=arr[i+1];
    n--;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
