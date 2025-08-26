// 4. To insert the value at the given position and expand the array size


#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4};
    int n=4,pos=2,val=3;
    for(int i=n;i>pos;--i)
        arr[i]=arr[i-1];
    arr[pos]=val;
    n++;
    for(int i=0;i<n;++i)
    cout<<arr[i]<<" ";    
    
}