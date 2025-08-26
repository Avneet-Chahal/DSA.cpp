//  Find Peak element

#include<iostream>
using namespace std;
int peakElem(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(arr[mid]<arr[mid]+1){
            left=mid+1;
        }
        else{
            right=mid;
        }
    return left;
    }
    return 0;
}
int main(){
    int arr[]={2,5,9,7,2,4,6,1};
    int size=8;
    cout<<peakElem(arr,size);
    

}