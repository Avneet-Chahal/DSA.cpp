//11.        Sorted array/list --  Ascending Order

#include <iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int size,int tar){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==tar)
        return mid;
        else if(arr[mid]<tar)
            left=mid+1;
        
        else
            right=mid-1;
        
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,40,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int tar=40;
    int index=binarySearch(arr,size,tar);
    if(index!=-1)
    cout<<"Elements found at the index"<<" "<<index;
    else
    cout<<"Element not found";
    return 0;
    
}