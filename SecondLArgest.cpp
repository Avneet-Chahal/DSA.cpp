//  find the second largest element

#include<iostream>
using namespace std;
int secondLargest(int arr[],int size){
    int maxx1=arr[0];
    int maxx2=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxx1){
            maxx2=maxx1;
            maxx1=arr[i];
        }
        else if(arr[i]>maxx2 && arr[i]!=maxx1){
            maxx2=arr[i];
        }
    }
    if(maxx2==arr[0]){
        return -1;
    }
    return maxx2;
}
int main(){
    int arr[]={2,5,9,7,2,4,6,1};
    int size=8;
    int result=secondLargest(arr,size);
    cout<<result<<endl;

}